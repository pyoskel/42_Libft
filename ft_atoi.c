/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbartoch <pbartoch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:02:58 by pbartoch          #+#    #+#             */
/*   Updated: 2025/01/22 20:09:55 by pbartoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+' && *(str + 1) != '-')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

// int	main(void)
// {
//     char *test_strings[] =
// 	{
//         "123",
//         "-456",
//         "  +789",
//         " \t\n\v\f\r  12345",
//         "0",
//         "-0",
//         "+0",
//         "2147483647", // INT_MAX
//         "-2147483648", // INT_MIN
//         "9999999999", // Überlauf
//         "-9999999999", // Unterlauf
//         "123abc",
//         "abc123",
//         "",
//         NULL
//     };

//     int i = 0;
//     while (test_strings[i] != NULL)
//     {
//         int original_result = atoi(test_strings[i]);
//         int your_result = ft_atoi(test_strings[i]);

//         printf("Test string: \"%s\"\n", test_strings[i]);
//         printf("Original atoi: %d\n", original_result);
//         printf("Deine ft_atoi: %d\n", your_result);

//         if (original_result == your_result)
//         {
//             printf("--> OK\n");
//         }
//         else
//         {
//             printf("--> FEHLER!\n");
//         }

//         printf("\n");
//         i++;
//     }

//     return EXIT_SUCCESS;
// }
