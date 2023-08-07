/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:44:24 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/07 11:13:21 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int index = -1;
	int tab[256] = {0};
	if (ac == 3)
	{
		while(av[2][++index])
			tab[(int)av[2][index]] = 1;
		index = -1;
		while (av[1][++index])
		{
			if (tab[(int)av[1][index]] == 1)
			{
				tab[(int)av[1][index]] = 0;
				write(1, &av[1][index], 1);
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}