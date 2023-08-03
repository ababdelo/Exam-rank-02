/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:30:05 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/03 10:44:12 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return 0;
	else
	{
		if (n % 2 == 0)
			return 1;
	}
	return 0;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("| %d |\n", is_power_of_2(atoi(av[1])));
	}
	else
		printf("\n");
	return 0;
}