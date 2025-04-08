/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:14:32 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/08 16:58:43 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *news;
	int str1;
	int str2;

	if (!s1 || !s2)
		return (NULL);
	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	news = ft_calloc((str1 + str2 + 1), sizeof(char));
	if (!news)
		return(NULL);
	i = 0;
	while (s1[i])
	{
		news[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		news[i] = s2[j];
		i++;
		j++;
	}
	news[i] = '\0';
	return(news);
}

int main(void)
{
	char *str = "Hello GUSGUS";
	char *str1 = "Goodbye GUSGUS";

	printf("Result: %s\n", ft_strjoin(str, str1));
}