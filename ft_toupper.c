/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:36:39 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/06 00:52:07 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c = c - 32);
	}
	else
	{
		return (c);
	}
}

// int main(void)
// {
// 	char c =  ft_toupper('p');

// 	printf("%c\n", c);
// 	return (0);
// }