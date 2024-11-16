/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 03:38:27 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/16 06:03:37 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		len = 0;
	else if (len > str_len - start)
		len = str_len - start;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char *str = "Hello, World!";
// 	char *substr;

// 	substr = ft_substr(str, 20, 5);
// 	printf("Substring: '%s'\n", substr); // Erwartet: ''
// 	free(substr);

// 	substr = ft_substr(str, 7, 5);
// 	printf("Substring: '%s'\n", substr); // Erwartet: 'World'
// 	free(substr);

// 	substr = ft_substr(str, 0, 5);
// 	printf("Substring: '%s'\n", substr); // Erwartet: 'Hello'
// 	free(substr);

// 	return (0);
// }
