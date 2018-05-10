/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 13:37:53 by ychahbar          #+#    #+#             */
/*   Updated: 2018/05/06 15:54:48 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = -1;
	while (++a <= 9)
	{
		b = a;
		while (++b < 9)
		{
			c = b;
			while (++c <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
			}
			if (a != '7' || b != '8' || c != '9')
			{
				ft_putchar(44);
				ft_putchar(32);
			}
		}
	}
}
