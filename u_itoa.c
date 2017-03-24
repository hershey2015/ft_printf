/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:12:26 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/22 17:12:31 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*plus(unsigned long int n, t_plist *lst)
{
	long int			i;
	unsigned long int		l;
	char		*str;
	int		pre;

	
	l = n;
	i = 0;
	while (++i && l >= 10)
		l = l / 10;
	pre = lst->prec - i;
	pre = (pre >= 0) ? pre : 0;
	str = (char *)malloc(i + pre + 1);
	str[i + pre] = '\0';
	str[0] = '0';
	while (n)
	{
		str[--i + pre] = n % 10 + '0';
		n = n / 10;
	}
	while (pre--)
		str[i + pre] = 48;
	return (str);
}

char			*ft_u_itoa(unsigned int n, t_plist *lst)
{
	char		*str;
	unsigned long int	l;

	l = n;
	str = plus(l, lst);
	return (str);
}
