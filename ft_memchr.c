/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:25:30 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/09 15:18:05 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	len;

	len = 0;
	while (len < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((char *)s);
		}
		len++;
		s++;
	}
	return (NULL);
}

	// int main() {
	// char *str = "laKlo Welt!";
	// void *result;
	// // char test[] = "abc\0"; Beispiel
	// // char *test = NULL; Beispiel

	// // Suche nach 'l'
	// result = ft_memchr(str, 'l', 0);
	// if (result != NULL) {
	// printf("Zeichen 'l' gefunden an Position: %ld\n", (char *)result - str); 
	// } else {
	// printf("Zeichen 'l' nicht gefunden.\n");
	// }

	// // Suche nach 'z'
	// result = ft_memchr(str, 'z', 12);
	// if (result != NULL) {
	// printf("Zeichen 'z' gefunden an Position: %ld\n", (char *)result - str); 
	// } else {
	// printf("Zeichen 'z' nicht gefunden.\n");
	// }
	// // printf("%s\n", ft_strchr(str, ' '));
	// // printf("%s\n", strchr(str, ' '));

	// return 0;
	// }
