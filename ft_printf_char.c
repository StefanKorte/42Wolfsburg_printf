/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 00:39:44 by skorte            #+#    #+#             */
/*   Updated: 2021/09/27 11:07:18 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** ft_printf_char writes the character argument for the call "%c"
** and returns the number of written characters (which is 1)
*/

int	ft_printf_char(char c)
{
	return (write(1, &c, 1));
}
