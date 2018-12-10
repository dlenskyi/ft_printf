/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 15:47:09 by dlenskyi          #+#    #+#             */
/*   Updated: 2018/12/06 15:47:10 by dlenskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		length(int n)
{
	int		len;
	long	tmp;

	len = 0;
	tmp = n;
	while (tmp)
	{
		len++;
		tmp /= 10;
	}
	if (n < 0)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	long	tmp;
	int		len;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	len = length(n);
	tmp = n;
	if (n < 0)
		tmp = -tmp;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		*str = '-';
	while (tmp)
	{
		str[--len] = tmp % 10 + '0';
		tmp /= 10;
	}
	return (str);
}
