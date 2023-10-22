/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:43:22 by skorte            #+#    #+#             */
/*   Updated: 2021/10/08 09:15:14 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "libftprintf.h"

int	main(void)
{
	int	length;
	int	length2;

	length  = ft_printf("Hello %c %02345.+ d %s %% World! %p %X \n", 'c', 130, "str", "x", 122);
	length2 =    printf("Hello %c %0d %s %% World! %p %X \n", 'c', 130, "str", "x", 122);
	printf("\nOutput-length = %i\n", length);
	printf("Printf-length = %i\n\n", length2);

	length  = ft_printf("Empty string %s, null address string %s, null pointer %p\n", "", NULL, NULL, NULL);
	length2 =    printf("Empty string %s, null address string %s, null pointer %p\n", "", NULL, NULL, NULL);
	printf("\nOutput-length = %i\n", length);
	printf("Printf-length = %i\n\n", length2);

	length  = ft_printf("Format ends with %% %");
	length2 =    printf("Format ends with %% %");
	printf("\nOutput-length = %i\n", length);
	printf("Printf-length = %i\n\n", length2);

	length  = ft_printf("Format with orphaned %% % \n");
	length2 =    printf("Format with orphaned %% % \n");
	printf("\nOutput-length = %i\n", length);
	printf("Printf-length = %i\n\n", length2);

	length  = ft_printf("Min int %i, max int %i \n", -2147483648, 2147483647);
	length2 =    printf("Min int %i, max int %i \n", -2147483648, 2147483647);
	printf("\nOutput-length = %i\n", length);
	printf("Printf-length = %i\n\n", length2);

	length  = ft_printf("Missing arguments i %i s %s c %c p %p \n");
	length2 =    printf("Missing arguments segfaults with real printf\n\n");
}
