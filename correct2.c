/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 16:42:57 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/21 17:11:56 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		large(char *s, int *i, t_plist *lst)
{
	if ((s[*i] == 'l' && s[*i + 1] == 'l') && (lst->size = 'T'))
		*i += 2;
	else if ((s[*i] == 'h' && s[*i + 1] == 'h') && (lst->size = 'H'))
		*i += 2;
	else if ((s[*i] == 'l' || s[*i] == 'h' || s[*i] == 'j' || s[*i] == 'z'
				|| s[*i] == 't' || s[*i] == 'L') && (lst->size = s[*i]))
		++*i;
	return (*i);

}
