/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpsn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:52:55 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/04 09:27:10 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	int j;
	while (s[i])
	{
		j = 0;
		while (s[i] != reject[j] && reject[j])
			j++;
		if (s[i] == reject[j] && reject[j])
		break;
		i++;
	}
	return i;
}

// int	main()
// {
// 	char s1[] = ".p1HDFKVDJHFLGJ1337";
// 	char s2[] = ".0123456789";
// 	printf("--> %lu\n", strcspn(s1, s2));
// 	printf("--> %lu\n", ft_strcspn(s1, s2));
// }
