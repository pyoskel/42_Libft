/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:25:39 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/09 20:17:24 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_h;
	size_t	len_n;

	len_h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[len_h] != '\0' && len_h < len)
	{
		len_n = 0;
		while (haystack[len_h + len_n] == needle[len_n] \
		&& needle[len_n] != '\0' && (len_h + len_n) < len)
		{
			len_n++;
		}
		if (needle[len_n] == '\0')
			return ((char *)haystack + len_h);
		len_h++;
	}
	return (NULL);
}
