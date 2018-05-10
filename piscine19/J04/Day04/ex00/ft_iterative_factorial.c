/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 16:26:06 by ychahbar          #+#    #+#             */
/*   Updated: 2018/05/07 22:28:48 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;
	int factorial;

	i = nb;
	factorial = 1;
	while (i > 0)
	{
		factorial = factorial * i;
		i--;
	}
	printf("affiche : %d\n", factorial);
	return (factorial);
}
