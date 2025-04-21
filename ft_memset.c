/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:28:50 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/21 12:57:51 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char			*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* #include <stdio.h>
int main(int argc, char *argv[])
{
	char *str;

	if (argc > 1)
	{
		str = ft_memset(argv[1], 'l', 5);
		printf(" Resultado: %s\n", str);
	}
} */