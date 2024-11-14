/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:59:32 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/14 02:15:29 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// Beispielfunktion 1, die von ft_striteri aufgerufen wird
	// void my_func(unsigned int i, char *c)
	// {
	// 	*c = *c - 32; // Wandelt Kleinbuchstaben in Großbuchstaben um
	// 	printf("Index %u: %c\n", i, *c);
	// }

// 	int	main(void)
// 	{
// 	char str[] = "hallo welt";

// 	printf("Original String: %s\n", str);
// 	ft_striteri(str, &my_func);
// 	printf("Modifizierter String: %s\n", str);
// 	return (0);
// }

// // Beispielfunktion 2, die von ft_striteri aufgerufen wird
// void zeichen_ausgeben(unsigned int i, char *c) 
// {
//     printf("Index %u: %c\n", i, *c);
// }

// int main()
// {
//     char str[] = "hello world";

//     ft_striteri(str, &zeichen_ausgeben); // Hier den Funktionsnamen einsetzen
//     printf("%s\n", str);
//     return 0;
// }