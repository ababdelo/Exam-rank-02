/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:30:34 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 14:20:28 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// int ft_strlen(char *str)
// {
// 	int index = -1;
// 	while (str[++index])
// 		;
// 	return index;
// }

int main(int ac, char **av)
{
	int i = 0;
	// int lenav2 = ft_strlen(av[2]);
	// int lenav3 = ft_strlen(av[3]);
	if (ac == 4)
	{
		while(av[1][i])
		{
			if (av[1][i] == av[2][0] && !av[2][1] && !av[3][1])
			{	
				av[1][i] = av[3][0];
				write(1, &av[1][i], 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}