/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 20:51:35 by asouat            #+#    #+#             */
/*   Updated: 2018/05/06 21:08:52 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int factoriel;

	if (nb >= 0)
	{
		i = nb;
		factoriel = 1;
		while (i > 1)
		{
			factoriel = factoriel * i;
			i--;
		}
		return (factoriel);
	}
	else
		return (0);
}
