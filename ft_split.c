/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:36:07 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/21 13:07:38 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

void	ft_free(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free (result[i]);
		i++;
	}
	free (result);
}

char	**relief(const char *s, char c, char **result)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[j] = malloc((i - start) + 1);
			if (!result[j])
				return (ft_free(result), NULL);
			ft_strlcpy(result[j], s + start, (i - start) + 1);
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	if (*s == '\0')
	{
		result = malloc(sizeof(char *));
		if (!result)
			return (NULL);
		result[0] = NULL;
		return (result);
	}
	result = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!result)
		return (NULL);
	return (relief(s, c, result));
}

/* int main(void)
{
    const char *str = "";
    char delimiter = ' ';
    char **resultult;
    int i;

    resultult = ft_split(str, delimiter);
    if (!resultult)
    {
        printf("Memory allocation failed!\n");
        return (1);
    }

    printf("Original string: \"%s\"\n", str);
    printf("Split result:\n");
    i = 0;
    while (resultult[i] != NULL)
    {
        printf("Word %d: \"%s\"\n", i + 1, resultult[i]);
        free(resultult[i]);
        i++;
    }
    free(resultult);
    return (0);
} */
