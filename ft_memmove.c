/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:58:55 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/04 23:54:41 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d > s && d < s + len)
	{
		while (len > 0)
		{
			d[len] = s[len];
			i--;
		}
	}
	else
	{
		ft_memcpy(dest, src, len);
	}
	return (dest);
}
