/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:07:13 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/06 00:48:43 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

// int	main(void)
// {
// 	char str[20] = "Hallo Reisender";
// 	ft_bzero(str, 9);
// 	printf("%s\n", str + 9);
// 	return (0);
// }

// // Alte Funktion:
// void	ft_bzero(void *s, size_t len)
// {
// 	ft_memset(s, 0, len);
// }
