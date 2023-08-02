/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:57:26 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 17:35:20 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_atoi(const char *str)
{
	int res = 0;
	int sign = 1;
	int index = 0;
	
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign *= -sign;
		index++;
	}
	while (str[index] && str[index] >= '0' && str[index] <= '9')
	{
		res = res * 10;
		res = res + (str[index] - '0');
		index++;
	}
	return (res * sign);
}
/*

Examples:

$> ./ft_atoi "-42"| cat -e
----> atoi | -42 |$
----> ft_atoi | -42 |$

$> ./ft_atoi "1337"| cat -e
----> atoi | 1337 |$
----> ft_atoi | 1337 |$

$> ./ft_atoi | cat -e
$

$>./ft_atoi "2147483647" | cat -e
atoi | 2147483647 |$
ft_atoi | 2147483647 |$

$>./ft_atoi "-2147483648" | cat -e
----> atoi | -2147483648 |$
----> ft_atoi | -2147483648 |$
*/

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("----> atoi | %d |\n", atoi(av[1]));
// 		printf("----> ft_atoi | %d |\n", ft_atoi(av[1]));
// 	}
// 	else
// 		printf("\n");
// 	return 0;
// }