/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:25:45 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/21 12:32:52 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int			i;
	unsigned char			*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_bzero(argv[1], 5);
		printf(" Resultado: %s\n", argv[1]);
	}
	return(0);
}*/