/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:45:34 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/21 12:40:54 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_switch(char *str, long nbr, int len)
{
	int	i;

	if (nbr == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	i = len - 1;
	while (nbr)
	{
		str[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		i;
	char	*str;

	nbr = n;
	i = ft_intlen(nbr);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	return (ft_switch(str, nbr, i));
}

/* int main(void)
{
	int num = -12345; // Test case for negative number
	char *result = ft_itoa(num);

	if (result)
	{
		printf("The string representation of %d is: %s\n", num, result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}

	num = 0; // Test case for 0
	result = ft_itoa(num);

	if (result)
	{
		printf("The string representation of %d is: %s\n", num, result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}

	num = -2147483648; // Test case for INT_MIN
	result = ft_itoa(num);

	if (result)
	{
		printf("The string representation of %d is: %s\n", num, result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}

	return (0);
} */