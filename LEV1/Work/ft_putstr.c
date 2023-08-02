/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:10:52 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 10:10:53 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index = -1;
	while (str[++index])
		write(1, &str[index], 1);
}

// int main()
// {
// 	ft_putstr("Hello there!\n");
// }