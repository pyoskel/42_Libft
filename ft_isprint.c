/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:55:42 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/06 00:49:07 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main(void)
// {
// 	int c1 = 31;
// 	int c2 = 83;
// 	int c3 = 127;
// 	int c4 = 126;

// 	printf("%d\n", ft_isprint(c1));
// 	printf("%d\n", ft_isprint(c2));
// 	printf("%d\n", ft_isprint(c3));
// 	printf("%d\n", ft_isprint(c4));
// }