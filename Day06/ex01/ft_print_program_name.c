/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 22:11:40 by asouat            #+#    #+#             */
/*   Updated: 2018/05/09 22:40:01 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_putstr(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
	return (*str);
}

int		main(int argc, char **argv)
{
	if(argc == 99)
		return (0);
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
