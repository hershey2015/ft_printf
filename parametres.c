/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parametres.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 13:02:29 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/20 16:43:18 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void function(t_plist *lst, va_list *argptr, int i)
{
	t_p	farg[24];

	farg[0] = decemical;
	farg[1] = decemical;
	farg[2] = decemical;
	farg[3] = ft_base;
	farg[4] = u_decemical;
	farg[6] = ft_base;
	farg[7] = ft_base;
	farg[8] = fft_putchar;
	farg[9] = fft_putchar;
	farg[10] = fft_putstr;
	farg[19] = fft_putstr;
	farg[20] = ft_base;
	farg[23] = ft_base;
	farg[i](lst, argptr);
}

int		parametres(t_plist *lst, va_list *argptr)
{
	int		i;
	char	*s;

	s = "dDioumxXcCsaAeEfFgGSpniO";
	i = 0;
	if (lst->type == '%')
	{
		lst->str = (char *)malloc(2);
		lst->str[0] = '%';
		lst->str[1] = '\0';
	}
	else
	{
		while (s[i] != '\0')
		{
			if (lst->type == s[i])
				break ;
			i++;
		}
		function(lst, argptr, i);
	}
//	i = ft_putstr(lst->str);
	i = printable(lst);
	return (i);
}
