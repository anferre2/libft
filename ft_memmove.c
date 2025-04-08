/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:26:54 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/07 15:05:07 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n-- > 0)
			((unsigned char *)dest)[n] = ((const char *)src)[n];
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char dst[] = "buceta";

	ft_memmove((dst + 2), dst, 3);
	printf("resultado: %s\n", dst);
}