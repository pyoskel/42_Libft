/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:42:25 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/18 21:25:41 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i <= ft_strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}
