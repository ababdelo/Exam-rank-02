/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:15:15 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/03 11:46:07 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int index = -1;
	while (str[++index]);
	return index;
}

char    *ft_strdup(char *src)
{
	char *dst;
	int index = 0;
	if (!src)
		return NULL;
	dst = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dst)
		return NULL;
	while(src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return dst;
}

// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("Dup-Str: %s\n", ft_strdup(av[1]));
// 	else
// 		printf("\n");
// 	return 0;
// }