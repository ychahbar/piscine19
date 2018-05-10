/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:20:21 by ychahbar          #+#    #+#             */
/*   Updated: 2018/05/10 16:19:59 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int		*tab;
	int		i;

	tab = (int *)malloc(sizeof(int) * (max - min) + 1);

	i = 0;
	if (min < max)
	{
		while (min < max)
		{
			tab [i] = min;
			min++;
			i++;
		}
		tab[i] = '\0';
	}
	return (tab);
}

int		main(int argc,char **argv)
{
	(void)argc;
	int		*tab;
	int		i;

	i = 0;
	tab = ft_range(atoi(argv[1], atoi(argv[2]));
	while (tab[i])
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
