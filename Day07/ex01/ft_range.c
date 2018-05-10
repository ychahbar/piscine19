/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:26:39 by asouat            #+#    #+#             */
/*   Updated: 2018/05/10 16:23:20 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	tab = (int *)malloc(sizeof(int) * (max - min) + 1);
	i = 0;
	if (min <= max)
	{
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		tab[i] = '\0';
	}
	return (tab);
}
