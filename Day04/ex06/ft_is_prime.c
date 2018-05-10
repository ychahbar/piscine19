/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 19:37:26 by asouat            #+#    #+#             */
/*   Updated: 2018/05/08 00:32:37 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int main ()
{
	printf("%i\n", ft_is_prime(2111115733));
	printf("%i\n", ft_is_prime(0));
	printf("%i\n", ft_is_prime(1));
	printf("%i\n", ft_is_prime(-5));
}
