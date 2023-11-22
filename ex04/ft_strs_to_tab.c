/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:09:06 by lraggio           #+#    #+#             */
/*   Updated: 2023/10/13 22:58:39 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strs_to_tab.h"
#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	char	*dup;

	dup = malloc(ft_strlen(str) * sizeof(char) + 1);
	ft_strcpy(dup, str);
	if (!dup)
	{
		free(dup);
		return (0);
	}
	else
		return (dup);
}

struct	s_stock_str *ft_strs_to_lab(int ac, char **av)
{		
	t_stock_str	tab;

	tab.size = ft_strlen(av);
	tab.str = av;
	tab.copy = ft_strcpy(tab.copy, av); 

	return (0);
}
