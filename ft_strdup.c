/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:43:07 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/21 13:18:52 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup_str;

	i = ft_strlen(s);
	dup_str = ft_calloc(i + 1, sizeof(char));
	if (!dup_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup_str[i] = s[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}

/*int main(void)
{
	const char str[] = "Hello World";
	char *str1;
	
	str1 = ft_strdup(str);
	printf("Resultado: %s", str1);
	free(str1);
}*/