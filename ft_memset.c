/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:20:13 by pbartoch          #+#    #+#             */
/*   Updated: 2024/10/31 18:39:50 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}

// int	main(void)
// {
// 	char str[50] = "Hallo Welt!";
// 	ft_memset(str, 'X', 10); // Überschreibe die ersten 10 Bytes mit 'X'
// 	printf("%s\n", str); // Ausgabe: "XXXXX Welt!"
// 	return 0;
// }