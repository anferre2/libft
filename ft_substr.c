/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:54:14 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/08 16:36:46 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *str;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(start + s))
		len = ft_strlen(start + s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return(NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return(str);
}

int main(void)
{
    const char *original_str = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;
    char *substring;

    substring = ft_substr(original_str, start, len);
    if (substring)
    {
        printf("Original String: %s\n", original_str);
        printf("Substring: %s\n", substring);
        free(substring); // Don't forget to free the allocated memory
    }
    else
    {
        printf("Substring allocation failed.\n");
    }

    return 0;
}