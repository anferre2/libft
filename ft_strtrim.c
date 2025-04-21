/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:26:14 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/21 16:59:09 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	to_trim(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*new_str(const char *s1, int start, int end)
{
	char	*str;
	int		i;
	int		len;

	len = end - start + 1;
	if (len <= 0)
		len = 0;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set || set[0] == '\0')
		return (new_str(s1, 0, ft_strlen(s1) - 1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (to_trim((char *) set, s1[start]) == 1)
		start++;
	while (to_trim((char *)set, s1[end]) == 1 && end > start)
		end--;
	str = new_str(s1, start, end);
	if (!str)
		return (NULL);
	return (str);
}

/* int	main()
{
	const char	*str = "Hello :)H";
	const char	*set = "H";
	char		*temp = ft_strtrim(str, set);

	printf("before: %s\n", str);
	printf("after: %s\n", temp);
	free(temp);
} */