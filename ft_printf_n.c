/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 00:37:09 by skorte            #+#    #+#             */
/*   Updated: 2021/09/27 11:52:34 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** ft_printf_n writes the unsigned numeric argument
** for the calls "%x", "%X", "%u", and also "%p"
** and returns the number of written characters.
*/

int	ft_printf_n(unsigned long long num, char *base)
{
	int					index;
	char				num_string[20];

	index = 19;
	while (index >= 0)
	{
		num_string[index] = base[(num % ft_strlen(base))];
		num = num / ft_strlen(base);
		if (num == 0)
			return (write(1, &num_string[index], 20 - index));
		index--;
	}
	return (-1);
}
