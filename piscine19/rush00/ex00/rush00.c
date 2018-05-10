/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmottier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 15:53:22 by cmottier          #+#    #+#             */
/*   Updated: 2018/05/05 16:43:34 by cmottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void ft_putchar(char c);

int condition_coin(int x, int y, int width, int height) {
	int return_value;

	return_value = 0;
	if ( x == 1 && y == height )
		return_value = 1;
	if ( x == width && y == height )
		return_value = 1;
	if ( x == 1 && y == 1 )
		return_value = 1;
	if ( x == width && y == 1 )
		return_value = 1;
	return return_value;
}
int condition_horizontal(int y, int height) {
	int return_value;

	return_value = 0;
	if ( y == 1 || y == height )
		return_value = 1; 
	return return_value;
}
int condition_vertical(int x, int width) {
	int return_value;

	return_value = 0;
	if ( x == 1 || x == width )
		return_value = 1;
	return return_value;
}
void rush(int x, int y) {
	int width;
	int height;
	
	height = y;
	width = x;
	while ( y > 0 ) {
		x = width;
		while( x > 0 ) {
			if ( condition_coin(x, y, width, height) ) {
				ft_putchar('o');
			} else if ( condition_horizontal(y, height) ) {
				ft_putchar('-');
			} else if ( condition_vertical(x, width) ) {
				ft_putchar('|');
			} else
				ft_putchar(' ');
			x = x - 1;
		}
		y = y - 1;
		ft_putchar('\n');
	}
}
