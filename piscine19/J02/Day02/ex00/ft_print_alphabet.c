/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 09:08:02 by ychahbar          #+#    #+#             */
/*   Updated: 2018/05/07 14:11:17 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	lettre;

	lettre = 97;
	while (lettre < 123)
	{
		ft_putchar(lettre);
		lettre++;
	}
}
