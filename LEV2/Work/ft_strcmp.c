/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:33:02 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 16:53:15 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int index = 0;
	while (s1[index] && s2[index])
	{
		if ((unsigned char)s1[index] > (unsigned char)s2[index])
			return 1;
		else if ((unsigned char)s1[index] < (unsigned char)s2[index])
			return -1;
		index++;
	}
	return 0;
}

// int main()
// {	
// 	printf("%d\n",ft_strcmp("a", "b"));
// 	printf("%d\n",ft_strcmp("b", "a"));
// 	printf("%d\n",ft_strcmp("a", "a"));
// }