/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:58:51 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/03 16:37:24 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <string.h>

int main (int ac, char **av)
{
	int index;
	if (ac == 2)
	{
		index = -1;
		while (av[1][++index]);
		index -= 1;
		while (av[1][index] == ' ' || av[1][index] == '\t')
			index--;
		while(av[1][index] != ' ' && av[1][index] != '\t' && index >= 0)
			index--;
		index += 1;
		while(av[1][index])
		{
			if (av[1][index] == ' ' || av[1][index] == '\t')
				break;
			write(1, &av[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

/*
int main(int ac, char **av)
{
	int index= strlen(av[1]),index3 =index;
	int valid = 0;
	while(--index >= 0)
	{
		if(av[1][index] != ' ' && av[1][index] != '\t')
			valid = 1;
		if(valid && av[1][index] == ' ')
			break;
	}
	while(++index < index3)
		if(av[1][index] != ' ' && av[1][index] != '\t')
			write(1,&av[1][index],1);
	write(1,"\n",1);
}
*/