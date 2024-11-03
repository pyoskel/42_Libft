/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:35:20 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/03 22:20:56 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

// int	main(void)
// {
//     char *str = "Hallo Welt!";
//     size_t length = ft_strlen(str);

//     printf("Die Länge von \"%s\" ist %zu\n", str, length);
// 	return (0);
// }
