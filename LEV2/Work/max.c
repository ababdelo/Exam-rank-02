/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:51:12 by ababdelo          #+#    #+#             */
/*   Updated: 2023/08/05 11:55:30 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int max(int *tab, unsigned int len)
{
    int max;
    unsigned int i = 0;
    if (len <= 0)
        return 0;
    max = tab[i];
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return max;
}


// int main()
// {
// 	int arr[] = {5,2,42,3,0,7,6,4,9,1337};
// 	printf("the largest number in the given array is : %d\n", max(arr, 10));
// }