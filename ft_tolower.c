/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:22:45 by pbartoch          #+#    #+#             */
/*   Updated: 2024/10/31 18:33:06 by pbartoch         ###   ########.fr       */
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