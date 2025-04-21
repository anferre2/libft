/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:57:41 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/21 13:21:37 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void to_uppercase(unsigned int index, char *c)
{
    (void)index;
   
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}
int main()
{
	char str[] = "Hello World";
	
	ft_striteri(str, to_uppercase);

	printf("New string: %s\n", str);
	return(0);
} */