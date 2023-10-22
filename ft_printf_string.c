/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:43:22 by skorte            #+#    #+#             */
/*   Updated: 2021/09/27 11:34:02 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** The functions in the printf() family produce output according to
** a format as described below.  The functions printf() and
** vprintf() write output to stdout, the standard output stream.
**
** All of these functions write the output under the control of a
** format string that specifies how subsequent arguments (or
** arguments accessed via the variable-length argument facilities of
** stdarg(3)) are converted for output.
**
*/

/*
** ft_printf_string writes the string that is given as argument for ft_printf.
** If the given string is empty, 
*/

int	ft_printf_string(char *str)
{
	if (str == NULL)
		return (write(1, &"(null)", 6));
	return (write(1, str, ft_strlen(str)));
}
