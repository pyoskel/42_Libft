/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:22:45 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/06 00:52:06 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c = c + 32);
	}
	else
	{
		return (c);
	}
}

// int main(void)
// {
// 	char c =  ft_tolower('P');

// 	printf("%c\n", c);
// 	return (0);
// }