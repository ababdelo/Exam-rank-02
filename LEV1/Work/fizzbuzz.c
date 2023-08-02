/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:10:47 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/02 10:10:49 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main()
{
	int index = 1;
	int fst;
	int snd;
	
	while (index <= 100)
	{
		if (index % 3 == 0 && index % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (index % 3 == 0)
			write(1, "fizz", 4);
		else if (index % 5 == 0)
			write(1, "buzz", 4);
		else
		{	
			if (index < 10)
			{	
				fst = index + '0';
				write(1, &fst, 1);
			}
			else
			{
				fst = (index / 10) + '0';
				snd = (index % 10) + '0';	
				write(1, &fst, 1);
				write(1, &snd, 1);
			}
		}
		write(1, "\n", 1);
		index++;	
	}
	return 0;
}