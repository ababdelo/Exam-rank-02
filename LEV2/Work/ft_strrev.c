/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:30:25 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/03 14:11:28 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i = -1;
	int len = -1;
	char tmp;
	while(str[++len]);
	while (++i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
	return str;
}

int main(int ac, char **av)
{
	if (ac == 2)
		printf("Rev-Str: %s\n", ft_strrev(av[1]));
	else
		printf("\n");
}
