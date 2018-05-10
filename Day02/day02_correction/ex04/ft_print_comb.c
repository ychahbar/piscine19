/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 21:02:16 by asouat            #+#    #+#             */
/*   Updated: 2018/05/07 12:43:51 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c){
write (1,&c,1);
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = 0;
	while (c++ <= 9)
	{
		d = c+1;
		while (d++ <= 9)
		{
			u = d+1;
			while (u++ <= 9)
			{
				ft_putchar(c + '0');
				ft_putchar(d + '0');
				ft_putchar(u + '0');
				if (c != 7 || d != 8 || u != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int main(){
ft_print_comb();
return 0;
}
