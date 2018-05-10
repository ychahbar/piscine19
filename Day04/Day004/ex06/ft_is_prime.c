/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 19:37:26 by asouat            #+#    #+#             */
/*   Updated: 2018/05/07 22:15:08 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int nb_prime;
	int multiplication;

	if (nb > 0)
	{
		i = 1;
		while (i <= nb / 2 && multiplication != nb)
		{
			nb_prime = nb / i;
			multiplication = nb_prime * i;
			i++;
		}
		if (i == nb / 2)
			return (1);
	}
	else
		return (0);
	return (0);
}
