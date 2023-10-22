/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 00:37:09 by skorte            #+#    #+#             */
/*   Updated: 2021/09/27 12:18:37 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** ft_printf_int writes the signed integer argument for the call "%i"
** and returns the number of written characters.
**
** To do this, it first checks the sign, prints "-" if < 0.
** Then it converts the int to an unsigned long and prints it
** using ft_printf_n with decimal base.
*/

int	ft_printf_int(int integer)
{
	if (integer < 0)
	{
		write(1, &"-", 1);
		return (ft_printf_n(-1 * (long)integer, "0123456789") + 1);
	}
	return (ft_printf_n((unsigned long)integer, "0123456789"));
}
