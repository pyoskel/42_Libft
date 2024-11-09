/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:25:42 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/09 18:34:41 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = 0;
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			str = (char *)s;
		}
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		return ((char *)s);
	return (str);
}

	// int main() {
	// char *str = "Hallo Welt!";
	// const char *result;
	// // char test[] = "abc\0"; Beispiel
	// // char *test = NULL; Beispiel

	// // Suche nach 'l'
	// result = ft_strrchr(str, 'l');
	// if (result != NULL) {
	// printf("Zeichen 'l' gefunden an Position: %ld\n", result - str); 
	// } else {
	// printf("Zeichen 'l' nicht gefunden.\n");
	// }

	// // Suche nach 'z'
	// result = ft_strrchr(str, 'z');
	// if (result != NULL) {
	// printf("Zeichen 'z' gefunden an Position: %ld\n", result - str); 
	// } else {
	// printf("Zeichen 'z' nicht gefunden.\n");
	// }
	// // printf("%s\n", ft_strchr(str, ' '));
	// // printf("%s\n", strchr(str, ' '));

	// return 0;
	// }