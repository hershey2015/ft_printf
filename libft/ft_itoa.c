/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:12:26 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/08 16:24:36 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*plus(long int n)
{
	int			i;
	long int	l;
	char		*str;

	l = n;
	i = 0;
	while (l >= 10)
	{
		l = l / 10;
		i++;
	}
	if (!(str = (char *)malloc(i + 2)))
		return (0);
	str[i + 1] = '\0';
	while (i >= 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (str);
}

static char		*minus(long int n)
{
	long int		i;
	long int		l;
	char			*str;

	n = (-1) * n;
	l = n;
	i = 0;
	while (l >= 10)
	{
		l = l / 10;
		i++;
	}
	if (!(str = (char *)malloc(i + 3)))
		return (0);
	str[i + 2] = '\0';
	i++;
	while (i - 1 >= 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	str[0] = '-';
	return (str);
}

char			*ft_itoa(int n)
{
	char		*str;
	long int	l;

	l = n;
	if (n >= 0)
		str = plus(l);
	if (n < 0)
		str = minus(l);
	return (str);
}
