/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:16:51 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/15 19:09:29 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	d = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == d)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}

/* int	main()
{
	char	dest[50] = "Hello WOrld";
	void *sr;
	printf("Before: %s\n", dest);
	sr = ft_memchr(dest, 'l', 10);
	dest[10] = '\0';
	printf("After: %s\n", (char *)sr);
	return (0);
} */