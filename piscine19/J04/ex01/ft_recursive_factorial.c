/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 18:56:31 by ychahbar          #+#    #+#             */
/*   Updated: 2018/05/07 22:25:29 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		return (nb = nb * ft_recursive_factorial(nb - 1));
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
