/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:35:20 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/02 18:45:11 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

// int	main(void)
// {
//     char *str = "Hallo Welt!";
//     int length = ft_strlen(str);

//     printf("Die Länge von \"%s\" ist %d\n", str, length);
// 	return (0);
// }
