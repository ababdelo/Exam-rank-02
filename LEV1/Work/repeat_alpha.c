/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:34:06 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 13:27:21 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	int j;
	char lowalph[] = "abcdefghijklmnopqrstuvwxyz";
	char capalph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == 'a' || av[1][i] == 'A')
					write(1, &av[1][i], 1);
			else if (av[1][i] > 'a' && av[1][i] <= 'z')
			{
				j = 1;		
				while (lowalph[j++] != av[1][i])
					;
				// printf("j:|%d|\n", j);
				while (j-- > 0)
					write(1, &av[1][i], 1);
			}
			else if (av[1][i] > 'A' && av[1][i] <= 'z')
			{
				j = 1;
				while (capalph[j++] != av[1][i])
					;
				// printf("j:|%d|\n", j);
				while (j-- > 0)
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
