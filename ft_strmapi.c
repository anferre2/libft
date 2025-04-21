/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:29:06 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/15 19:05:44 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*news;
	unsigned int	len;
	unsigned int	i;

	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len])
		len++;
	news = malloc(sizeof(char) * (len + 1));
	if (!news)
		return (NULL);
	i = 0;
	while (i < len)
	{
		news[i] = f(i, s[i]);
		i++;
	}
	news[i] = '\0';
	return (news);
}

/* char to_uppercase(unsigned int index, char c)
{
    (void)index;
   
    if (c >= 'a' && c <= 'z')
        return c - 32;
	else
		return (c);
}
int main()
{
	char str[] = "Hello World";
	char *result = ft_strmapi(str, to_uppercase);

	if (result)
	{
		printf("ORiginal string: %s\n", str);
		printf("New string: %s\n", result);
	}
	free(result);
} */