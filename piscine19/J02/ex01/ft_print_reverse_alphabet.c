/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 11:58:53 by ychahbar          #+#    #+#             */
/*   Updated: 2018/05/06 16:05:30 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int lettre;

	lettre = 122;
	while (lettre > 96)
	{
		ft_putchar(lettre);
		lettre--;
	}
}
