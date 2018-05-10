/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:26:39 by asouat            #+#    #+#             */
/*   Updated: 2018/05/10 20:39:36 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	tab = (int *)malloc(sizeof(int) * (max - min));
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
	else if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	return (tab);
}
