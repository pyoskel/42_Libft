/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:25:33 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/09 16:14:27 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	while (len < n)
	{
		if ((unsigned char)s1[len] != (unsigned char)s2[len])
		{
			return ((unsigned char)s1[len] - (unsigned char)s2[len]);
		}
		len++;
	}
	return (0);
}
