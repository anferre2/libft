/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:08:52 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/15 19:10:51 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		d;
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