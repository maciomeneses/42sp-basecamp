/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamontei <mamontei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 23:50:37 by mamontei          #+#    #+#             */
/*   Updated: 2021/07/29 23:26:24 by mamontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(11, sizeof(char));
	str2 = calloc(11, sizeof(char));
	str3 = calloc(11, sizeof(char));
	str4 = calloc(11, sizeof(char));
	str1 = "0123456789";
	str2 = "a123456789";
	str3 = "0123:56789";
	str4 = "012345678/";
	printf("str1: %s, is_num: %d\n", str1, ft_str_is_numeric(str1));
	printf("str2: %s, is_num: %d\n", str2, ft_str_is_numeric(str2));
	printf("str3: %s, is_num: %d\n", str3, ft_str_is_numeric(str3));
	printf("str4: %s, is_num: %d\n", str4, ft_str_is_numeric(str4));
	return (0);
}
