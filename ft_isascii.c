/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 23:39:09 by pbartoch          #+#    #+#             */
/*   Updated: 2024/10/31 18:29:09 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	int c1 = 42;
// 	int c2 = 127;
// 	int c3 = 128;

// 	printf("%d\n", ft_isascii(c1));
// 	printf("%d\n", ft_isascii(c2));
// 	printf("%d\n", ft_isascii(c3));
// }