/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:35:20 by pbartoch          #+#    #+#             */
/*   Updated: 2024/10/17 22:07:22 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_strlen(char *s)
{
	int	length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

// int	main(void)
// {
//     char *str = "Hallo Welt!";
//     int length = ft_strlen(str);

//     printf("Die Länge von \"%s\" ist %d\n", str, length);
// 	return (0);
// }