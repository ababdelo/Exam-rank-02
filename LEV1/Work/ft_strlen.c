/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:20:45 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 10:24:56 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_strlen(char *str)
{
	int index = -1;
	while (str[++index])
		;
	return index;
}

// int main()
// {
// 	printf("lenght: %d", ft_strlen("Hello there! \n"));
// }