/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 21:15:29 by asouat            #+#    #+#             */
/*   Updated: 2018/05/07 11:22:20 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
