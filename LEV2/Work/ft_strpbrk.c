/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:33:29 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/04 15:12:04 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	if (!*s1 || !*s2)
		return NULL;
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return (char *)s1;
			i++;
		}
		s1++;
	}
	return NULL;
}


int	main()
{
	char s1[] = ". pc sa fHDF KVD ;kjv dig haafbbx   JHFL GJxzc2 1337";
	char s2[] = "1_3";
	printf("--> %s\n", strpbrk(s1, s2));
	printf("--> %s\n", ft_strpbrk(s1, s2));
}
