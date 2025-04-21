/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:56:37 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/21 12:58:06 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ns1;
	unsigned char	*ns2;
	size_t			i;

	if (n == 0)
		return (0);
	ns1 = (unsigned char *)s1;
	ns2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ns1[i] != ns2[i])
			return (ns1[i] - ns2[i]);
		i++;
	}
	return (0);
}

/* int main(void)
{
	const char *str2 = "Hello World";
	const void *s1 = (unsigned char *)str1;
	const void *s2 = (unsigned char *)str2;

	printf("After: %i\n", ft_memcmp(s1, s2, 10));
	return (0);
} */