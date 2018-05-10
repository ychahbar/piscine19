/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 11:53:02 by ychahbar          #+#    #+#             */
/*   Updated: 2018/05/10 20:36:12 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	int i;
	char *dest;
	i = 0;
	while(src[i] != '\0')
	i++;
	dest = (char *)malloc(sizeof(char) * i + 1);
	if(dest == NULL)
		return(0);
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int     main (int argc, char ** argv)
{
	(void)argc;
	printf("%s\n", ft_strdup(argv[1]));
	return (0);
}
