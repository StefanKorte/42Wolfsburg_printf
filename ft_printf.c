/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:43:22 by skorte            #+#    #+#             */
/*   Updated: 2021/09/27 15:51:18 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** printf man:
**
** The functions in the printf() family produce output according to
** a format as described below.  The functions printf() and
** vprintf() write output to stdout, the standard output stream.
**
** All of these functions write the output under the control of a
** format string that specifies how subsequent arguments (or
** arguments accessed via the variable-length argument facilities of
** stdarg(3)) are converted for output.
*/

/*
** ft_skip skips past bonus commands "0123456789+ #-.*".
** In case of "*", also one argument of va_list is skipped.
*/

static void	ft_skip(const char *format, int *index, va_list *input, char *skip)
{
	int		i;

	i = 0;
	while (skip[i] && format[*index])
	{
		if (format[*index] == skip[i])
		{
			if (format[*index] == '*')
				va_arg(*input, int);
			*index = *index + 1;
			i = -1;
		}
		i++;
	}
}

/*
** ft_variable searches for the conversion specifier, and pipes the argument
** in the appropriate format into the corresponding print function.
** It returns the number of printed characters or -1 if no specifier is found.
*/

static int	ft_variable(const char *format, int *index, va_list *input)
{
	ft_skip(format, index, input, "0123456789+ #-.*");
	if (format[*index] == 'c')
		return (ft_printf_char(va_arg(*input, int)));
	else if (format[*index] == 'i' || format[*index] == 'd')
		return (ft_printf_int(va_arg(*input, int)));
	else if (format[*index] == 'x')
		return (ft_printf_n(va_arg(*input, unsigned int), "0123456789abcdef"));
	else if (format[*index] == 'X')
		return (ft_printf_n(va_arg(*input, unsigned int), "0123456789ABCDEF"));
	else if (format[*index] == 's')
		return (ft_printf_string(va_arg(*input, char *)));
	else if (format[*index] == 'p')
		return (ft_printf_pointer(va_arg(*input, unsigned long)));
	else if (format[*index] == 'u')
		return (ft_printf_n(va_arg(*input, unsigned int), "0123456789"));
	else if (format[*index] == 'o')
		return (ft_printf_n(va_arg(*input, unsigned int), "01234567"));
	else if (format[*index] == '%')
		return (write(1, &"%", 1));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	int		index;
	int		length;
	int		length_add;
	va_list	input;

	index = 0;
	length = 0;
	va_start(input, format);
	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			length_add = ft_variable(format, &index, &input);
			if (length_add == -1)
				return (-1);
			length += length_add;
		}
		else
			length += write(1, &format[index], 1);
		index++;
	}
	va_end(input);
	return (length);
}
