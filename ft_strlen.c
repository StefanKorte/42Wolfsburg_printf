/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 00:38:14 by skorte            #+#    #+#             */
/*   Updated: 2021/09/27 08:44:14 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** ft_strlen returns the length of a given string
*/

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i] != '\0')
		i++;
	return (i);
}
