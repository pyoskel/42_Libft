/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 04:46:42 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/16 00:14:01 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trim(const char *s1, const char *set, int *start, int *end)
{
	char	*result;

	*start = 0;
	while (s1[*start] && ft_strchr(set, s1[*start]))
		(*start)++;
	*end = ft_strlen(s1) - 1;
	while (*end >= 0 && ft_strchr(set, s1[*end]))
		(*end)--;
	if (*end < *start)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		end;
	int		start;
	int		i;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = ft_trim(s1, set, &start, &end);
	if (result)
		return (result);
	result = malloc((end - start + 2) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (start <= end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
