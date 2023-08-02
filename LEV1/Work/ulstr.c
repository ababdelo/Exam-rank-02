/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:26:07 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 14:42:21 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int	index = -1;

	if (ac == 2)
	{
		while (av[1][++index])
		{
			if (av[1][index] >= 'a' && av[1][index] <= 'z')
				av[1][index] = av[1][index] - 32;
			else if (av[1][index] >= 'A' && av[1][index] <= 'Z')
				av[1][index] = av[1][index] + 32;
			write(1, &av[1][index], 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}
