/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:40:06 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/14 03:08:48 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_new(const char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	return (str_len);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (NULL);
	result = malloc((ft_strlen_new(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <ctype.h> // Für toupper

// char to_upper(unsigned int i, char c) {
// 	return toupper(c);
// }

// int main() {
// 	char *str = "hello world";
// 	char *result = ft_strmapi(str, to_upper);
// 	printf("%s\n", result); // Gibt "HELLO WORLD" aus
// 	free(result); // Speicher freigeben!
// 	return 0;
// }
