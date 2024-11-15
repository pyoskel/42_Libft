/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:13:33 by pbartoch          #+#    #+#             */
/*   Updated: 2024/11/15 21:34:31 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/// @brief 
/// @param n 
/// @param len describes lenght of number 
/// @return size_t etc...
static char	*negativ_nmb(int n, int len)
{
	char	*neg_result;

	neg_result = malloc((len + 1) * sizeof(char));
	if (!neg_result)
		return (NULL);
	neg_result[len] = '\0';
	neg_result[0] = '-';
	n = -n;
	while (n > 0)
	{
		neg_result[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (neg_result);
}

/// @brief 
/// @param n 
/// @return 
char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_len(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		return (negativ_nmb(n, len));
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (n > 0)
	{
		result[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
