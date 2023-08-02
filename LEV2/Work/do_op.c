/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:20:16 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 16:30:46 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int nbr1 = 0;
	int nbr2 = 0;
	int res = 0;
	if (ac == 4 && !av[2][1])
	{
		nbr1 = atoi(av[1]);
		nbr2 = atoi(av[3]);
		if (av[2][0] == '*')
			res = nbr1 * nbr2;
		if (av[2][0] == '/')
			res = nbr1 / nbr2;
		if (av[2][0] == '%')
			res = nbr1 % nbr2;
		if (av[2][0] == '-')
			res = nbr1 - nbr2;
		if (av[2][0] == '+')
			res = nbr1 + nbr2;
		printf("%d\n", res);
		
	}
	else
		printf("\n");
	return 0;
}