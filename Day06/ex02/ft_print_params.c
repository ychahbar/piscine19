/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 22:29:13 by asouat            #+#    #+#             */
/*   Updated: 2018/05/09 22:38:03 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

char	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
	return (*str);
}

int		main(int argc,char **argv)
{
	int	i;

	if (argc == 1)
	{
		return (0);
	}

	else
	{
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
