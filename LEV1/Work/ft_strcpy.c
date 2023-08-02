/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:10:31 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 10:17:51 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char *ft_strcpy(char *s1, char *s2)
{
	int index = -1;
	while (s1[++index])
		s2[index] = s1[index];
	s2[index] = '\0';
	return s2;
}

// int main()
// {
// 	char s1[15] = "Hello there!\n";
// 	char s2[15] = "              ";
// 	char *mine = ft_strcpy(s1,s2);
// 	char *their = strcpy(s1,s2);
// 	printf("ft_strcpy: %s", mine);
// 	printf("stcpy: %s", their);
// 	return 0;
// }