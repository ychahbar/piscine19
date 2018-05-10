/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 11:50:59 by asouat            #+#    #+#             */
/*   Updated: 2018/05/08 14:40:24 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_count_digit(int nb)
{
	int digit;
	
	digit = 0;
	while(nb > 0)
	{
		nb = nb / 10;
		digit++;
	}
	return (digit);
}

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

void ft_putchar(char c)
{
	write(1, &c, 1) ;
}

void ft_putnbr(int nb)
{
	int chiffre;
	int counter_digit;
	int puissance;
	
	counter_digit = ft_count_digit(nb);
	puissance = ft_iterative_power(10, counter_digit - 1);
	chiffre = nb;
	while(counter_digit > 0)
	{
		if (puissance == 10)
		{
			ft_putchar((chiffre / puissance) + '0');
			ft_putchar((chiffre %  puissance) + '0');
			return;
		}
		chiffre = chiffre / puissance; 
		printf("%d\n", chiffre);
		ft_putchar(chiffre + '0');
		counter_digit--;
		puissance = puissance / 10;
	}
}

int main(void)
{
	ft_putnbr(456);
}
