/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 23:06:19 by asouat            #+#    #+#             */
/*   Updated: 2018/05/08 13:06:50 by asouat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_length(char tab[]);

char	*ft_strrev(char *str)
{

	int i;
	int swap;
	int taille_str;

	i = 0;
	taille_str = str_length(str);
	while(i <= (taille_str / 2) && str[i] != 0)
	{
		swap = str[i];
		str[i] = str[taille_str];
		str[taille_str] = swap;
		i++;
		taille_str--;
	}
	return (str);
}

int		str_length(char str[])
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		i++;
	}
	return (i);
}
