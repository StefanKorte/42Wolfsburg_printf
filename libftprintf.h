/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:21:44 by skorte            #+#    #+#             */
/*   Updated: 2021/09/27 11:07:34 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

/*
// if called multiple times in the project, it  will not be processed again
*/

# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

/*
** stdlib: malloc, free
** unistd: write
** stdarg: va_list, va_start, va_arg, va_end
*/

int		ft_printf(const char *format, ...);
int		ft_strlen(const char *s);
int		ft_printf_char(char c);
int		ft_printf_int(int integer);
int		ft_printf_n(unsigned long long num, char *base);
int		ft_printf_pointer(unsigned long ptr);
int		ft_printf_string(char *s);

#endif
