/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:20:56 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/08 16:19:54 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	
	i = 0;
	if (little[0] == '\0')
		return((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return((char *)(big + i));
		i++;
	}
	return (NULL);
}


/* int	main(void)
{
	const char	str[] = "fui ao jardim da celeste";
	const char	to_find[] = "p";
	printf("Resultado: %s\n", ft_strnstr(str, to_find, 50));
} */