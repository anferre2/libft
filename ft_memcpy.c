/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:42:57 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/07 14:23:16 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *fdest;
	unsigned char *fsrc;
	
	if (!dest || !src)
		return(0);
	if (n == 0)
		return(dest);
	i = 0;
	fdest = (unsigned char*)dest;
	fsrc = (unsigned char *)src;
	while (i < n)
	{
		fdest[i] = fsrc[i];
		i++;
	}
	return (dest);
}

/* int	main()
{
	char	dest[6] = "";
	char	*src = "ati";

	printf("Before: %s\n", dest);
	ft_memcpy(dest, src, 5);
	dest[5] = '\0';
	printf("After: %s\n", dest);
	return (0);
} */