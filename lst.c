/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 20:13:26 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/20 18:21:15 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	lst_bzero(t_plist *lst)
{
	lst->width = 0;
	lst->prec = -2;
	lst->size = 0;
	lst->type = 0;
	lst->hash = 0;
	lst->plus = 0;
	lst->minus = 0;
	lst->nul = 0;
	lst->space = 0;
	lst->negative = 0;
}
