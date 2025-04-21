/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:48:04 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/15 19:11:25 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	d;

	i = 0;
	d = (char) c;
	while (s[i])
	{
		if (s[i] == d)
			return ((char *) &s[i]);
		i++;
	}
	if (d == '\0')
		return ((char *) &s[i]);
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
    const char *str = "Hello, world!";
    
    // Call ft_strchr to find the first occurrence of 'o' in the string
    char *result = ft_strchr(str, 'o');
    
    // Check if the result is not NULL (i.e., the character was found)
    if (result != NULL)
    {
        printf("Substring: %s\n", result);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", 'o');
    }
    return 0;
} */