/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:10:38 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 10:10:41 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char ** av)
{
	int index = 0;
	if (ac == 2)
	{
		while (av[1][index] && (av[1][index] == '\t' || av[1][index] == ' '))
			index++;
		while (av[1][index] && (av[1][index] != '\t' && av[1][index] != ' '))
		{
			write(1, &av[1][index], 1);
			index++;	
		}
	}
	write(1, "\n", 1);
	return 0;
}