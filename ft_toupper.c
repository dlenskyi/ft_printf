/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 23:00:16 by dlenskyi          #+#    #+#             */
/*   Updated: 2018/10/26 23:00:17 by dlenskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_toupper(char *s)
{
	int i;

	i = -1;
	while (s[++i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
}