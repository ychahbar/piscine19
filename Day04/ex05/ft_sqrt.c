/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 18:25:47 by asouat            #+#    #+#             */
/*   Updated: 2018/05/07 19:36:25 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int sqrt;

	if (nb > 1)
	{
		i = 1;
		sqrt = 1;
		while (i <= nb / 2 && sqrt != nb)
		{
			sqrt = i * i;
			i++;
		}
		if (sqrt == nb)
			return (i - 1);
		else
			return (0);
	}
	else if (nb == 1)
		return (nb);
	else
		return (0);
}
