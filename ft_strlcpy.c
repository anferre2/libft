/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:17:36 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/15 18:58:45 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
	{
		return (len);
	}
	i = 0;
	while (src[i] != '\0' && (i < (size - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/* int main(void)
{
	char	dest[10] = "sadasdasd";
	char	*src = "atiasasa";

	printf("Before: %s\n", dest);
	ft_strlcpy(dest, src, 5);
	dest[5] = '\0';
	printf("After: %s\n", dest);
	return (0);
} */