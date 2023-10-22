/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:09:25 by skorte            #+#    #+#             */
/*   Updated: 2021/10/06 09:00:31 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** ft_printf_pointer writes the address stored in the pointer given in
** the argument.  If it is a NULL pointer, "(nil)" is written, else
** the address value in hex, preceeded by "0x".
*/

int	ft_printf_pointer(unsigned long ptr)
{
	write (1, &"0x", 2);
	return (ft_printf_n(ptr, "0123456789abcdef") + 2);
}
