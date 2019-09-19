/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 22:19:18 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/11 20:52:38 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strslen(int size, char **strs, char *sep)
{
	int i;
	int mult;

	i = 0;
	mult = 0;
	while (i < size)
	{
		mult = mult + ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
	{
		mult = mult + (ft_strlen(sep) * (size - 1));
	}
	return (mult);
}

char	*ft_strcat(char *dest, char *str, char *sep, int bool)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (str[j] != '\0')
	{
		dest[i] = str[j];
		j++;
		i++;
	}
	j = 0;
	if (bool == 0)
	{
		while (sep[j] != '\0')
		{
			dest[i] = sep[j];
			j++;
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strconc;
	int		mult;
	int		i;
	int		bool;

	if (strs == NULL)
		return (0);
	mult = ft_strslen(size, strs, sep);
	strconc = (char *)malloc((mult + 1) * sizeof(char));
	if (size == 0)
	{
		strconc = "";
		return (strconc);
	}
	if (strconc == NULL)
		return (0);
	i = -1;
	bool = 0;
	while (++i < size)
	{
		if (i == size - 1)
			bool = 1;
		strconc = ft_strcat(strconc, strs[i], sep, bool);
	}
	return (strconc);
}
