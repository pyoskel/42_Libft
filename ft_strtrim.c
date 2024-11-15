/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 04:46:42 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/15 21:57:32 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	if (end < start)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = malloc((end - start + 2) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (start <= end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}

// int main(void)
// {
//     char *result;

//     // Test case 1: Regular trimming
//     result = ft_strtrim("   Hello, World!   ", " ");
//     printf("Test 1: '%s'\n", result);
//     free(result);
// 	return (0);
// }