/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 02:59:36 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/17 21:02:16 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_counting(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_word_copy(const char *s, char c)
{
	char	*array;
	int		len;
	int		i;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	if (len == 0)
		return (NULL);
	array = (char *)malloc((len + 1) * sizeof(char));
	if (!array)
		return (NULL);
	i = 0;
	while (i < len)
	{
		array[i] = s[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

static void	ft_free_split(char **strings, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}

static char	**main_logic(int word_count, const char *s, char **array, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && (j <= word_count))
	{
		if (s[i] != c)
		{
			array[j] = ft_word_copy(&s[i], c);
			if (!array[j])
			{
				ft_free_split(array, j);
				return (NULL);
			}
			j++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		word_count;

	if (!s)
		return (NULL);
	if (c == '\0')
	{
		array = (char **)malloc(2 * sizeof(char *));
		if (!array)
			return (NULL);
		array[0] = ft_word_copy(s, c);
		array[1] = NULL;
		return (array);
	}
	word_count = ft_word_counting(s, c);
	array = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	return (main_logic(word_count, s, array, c));
}

// char [0][6] == a
// 		0|--char * == 'Chars are awesome'[3]
// 		1|--char *
// 		2|--char *
// 		3|--char *