/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:43:51 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 11:10:57 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int index = -1;
	while (str[++index])
		;
	return index;
}
int main(int ac, char **av)
{
	int len;
	if (ac == 2)
	{
		len = ft_strlen(av[1]) - 1;
		while (len >= 0)
		{
			write(1, &av[1][len], 1);
			len--;
		}
	}
	write(1, "\n", 1);
	return 0;
}
