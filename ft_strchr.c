/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:25:08 by pbartoch          #+#    #+#             */
/*   Updated: 2024/10/31 18:48:32 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

// const char	*ft_strchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	if (s == NULL)
// 		return (NULL);
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 		{
// 			return (s + i);
// 			i++;
// 		}
// 	}
// 	return (NULL);
// }

// int main() {
// char *str = "Hallo Welt!";
// const char *result;
// // char test[] = "abc\0"; Beispiel
// // char *test = NULL; Beispiel

// // Suche nach 'l'
// result = ft_strchr(str, 'l');
// if (result != NULL) {
//   printf("Zeichen 'l' gefunden an Position: %ld\n", result - str); 
// } else {
//   printf("Zeichen 'l' nicht gefunden.\n");
// }

// // Suche nach 'z'
// result = ft_strchr(str, 'z');
// if (result != NULL) {
//   printf("Zeichen 'z' gefunden an Position: %ld\n", result - str); 
// } else {
//   printf("Zeichen 'z' nicht gefunden.\n");
// }
// // printf("%s\n", ft_strchr(str, ' '));
// // printf("%s\n", strchr(str, ' '));

// return 0;
// }