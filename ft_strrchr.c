/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:08:52 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/08 16:20:03 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	d;
	int			i;
	int			len;

	d = (char) c;
	len = ft_strlen((char *)s);
	i = len - 1;
	while (i >= 0)
	{
		if (s[i] == d)
			return ((char *) &s[i]);
		i--;
	}
	if (d == '\0')
		return ((char *) &s[len]);
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
    const char *str = "Hello, world!";
    
    // Call ft_strchr to find the first occurrence of 'o' in the string
    char *result = ft_strrchr(str, 'e');
    
    // Check if the result is not NULL (i.e., the character was found)
    if (result != NULL)
    {
        printf("Substring starting from the character: %s\n", result);  // Print the substring starting from the found character
    }
    else
    {
        printf("Character '%c' not found in the string.\n", 'o');
    }
    return 0;
} */