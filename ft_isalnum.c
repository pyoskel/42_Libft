/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:53:31 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/06 00:48:54 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
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
// 	int c1 = '3';
// 	int c2 = 'D';
// 	int c3 = 'h';
// 	int c4 = '$';

// 	printf("%d\n", ft_isalnum(c1));
// 	printf("%d\n", ft_isalnum(c2));
// 	printf("%d\n", ft_isalnum(c3));
// 	printf("%d\n", ft_isalnum(c4));
// 	return (0);
// }