/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:40:41 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/08 16:19:41 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*concat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size - 1)
		i++;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen((char *)dst);
	src_len = ft_strlen((char *)src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	concat(dst, src, dstsize);
	return (dst_len + src_len);
}

/* #include <stdio.h>
int main(void)
{
	char str[] = "Hello";
	char str1[] = "World";

	ft_strlcat(str, str1, 20);
	printf("Resultado: %s\n", str);
} */