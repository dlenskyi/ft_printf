/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 21:21:39 by dlenskyi          #+#    #+#             */
/*   Updated: 2018/10/28 21:21:40 by dlenskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		;
	while (s2[++j])
		;
	if (!(r = (char *)ft_memalloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	i = -1;
	while (s1[++i])
		r[i] = s1[i];
	j = -1;
	while (s2[++j])
		r[i++] = s2[j];
	r[i] = '\0';
	return (r);
}
