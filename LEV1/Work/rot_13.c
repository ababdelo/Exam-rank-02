/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:17:20 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 11:27:41 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int index = 0;
	if (ac == 2)
	{
		while (av[1][index])
		{
			if ((av[1][index] >= 'a' && av[1][index] <= 'm') || (av[1][index] >= 'A' && av[1][index] <= 'M'))
				av[1][index] = av[1][index] + 13;
			else if ((av[1][index] >= 'n' && av[1][index] <= 'z') || (av[1][index] >= 'N' && av[1][index] <= 'Z'))
				av[1][index] = av[1][index] - 13;
			write(1, &av[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return 0;
}