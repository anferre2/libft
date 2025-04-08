/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:57:21 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/08 16:23:08 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i] || s1[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
int	main(void)
{
	char	str[] = "Hello asd";
	char	str2[] = "Hello World!";
	char	str3[] = "Hello  ";
	char	str4[] = "Hello";

	printf("A primeira string é menor: %d\n", ft_strncmp(str, str2, 10));
	printf("A primeira string é maior: %d\n", ft_strncmp(str2, str3, 10));
	printf("As strings sao iguais: %d\n", ft_strncmp(str, str3, 10));
	printf("As strings sao iguais: %d\n", ft_strncmp(str, str4, 5));
} */