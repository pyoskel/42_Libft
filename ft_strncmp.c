/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:03:10 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/09 16:25:05 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	while ((s1[len] || s2[len]) && len < n)
	{
		if ((unsigned char)s1[len] != (unsigned char)s2[len])
		{
			return ((unsigned char)s1[len] - (unsigned char)s2[len]);
		}
		len++;
	}
	return (0);
}

// int main(void)
// {
//     char *s1 = "Hallo Welt";
//     char *s2 = "Hallo Welt!";
//     char *s3 = "Hallo";

//     // Vergleich von s1 und s2 mit n = 12
//     printf("strncmp(s1, s2, 12) = %d\n", strncmp(s1, s2, 12));
//     printf("ft_strncmp(s1, s2, 12) = %d\n\n", ft_strncmp(s1, s2, 12));

//     // Vergleich von s1 und s3 mit n = 5
//     printf("strncmp(s1, s3, 5) = %d\n", strncmp(s1, s3, 5));
//     printf("ft_strncmp(s1, s3, 5) = %d\n\n", ft_strncmp(s1, s3, 5));

//     // Vergleich von s1 und s2 mit n = 5
//     printf("strncmp(s1, s2, 5) = %d\n", strncmp(s1, s2, 5));
//     printf("ft_strncmp(s1, s2, 5) = %d\n", ft_strncmp(s1, s2, 5));

//     return (0);
// }