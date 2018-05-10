/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 21:44:12 by asouat            #+#    #+#             */
/*   Updated: 2018/05/07 10:27:17 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int puissance;

	i = 0;
	puissance = 1;
	if (nb > 0)
	{
		while (i < power)
		{
			puissance = puissance * nb;
			i++;
		}
		return (puissance);
	}
	else
		return (0);
}
