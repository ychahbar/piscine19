/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 15:11:24 by asouat            #+#    #+#             */
/*   Updated: 2018/05/07 12:49:47 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c){
write(1,&c,1);
}

void	exit_text(int a, int b)
{
	if (a == 98 && b == 99)
		ft_putchar(3);
	else
		ft_putchar(44);
}

void	ft_print_comb(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		if (b > a)
		{
			ft_putchar(a / 10 + 48);
			ft_putchar(a % 10 + 48);
			ft_putchar(32);
			ft_putchar(b / 10 + 48);
			ft_putchar(b % 10 + 48);
			exit_text(a, b);
			b++;
			if (b == 100)
			{
				b = a + 2;
				a++;
			}
		}
	}
}

int main(){
ft_print_comb();
return 0;
}
