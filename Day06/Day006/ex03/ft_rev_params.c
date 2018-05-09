/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 22:41:04 by asouat            #+#    #+#             */
/*   Updated: 2018/05/09 22:47:51 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int		main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		return (0);
	}
	i = argc - 1;
	while (i >= 1)
	{
		ft_putstr(argv[i]);
		i--;
		ft_putchar('\n');
	}
	return (0);
}
