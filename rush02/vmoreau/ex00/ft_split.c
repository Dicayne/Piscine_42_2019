/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:58:42 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/15 20:08:20 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int			is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int			ft_countword(char *str, char *charset)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset) == 1)
			i++;
		else
		{
			while (str[i] != '\0' && is_charset(str[i], charset) == 0)
				i++;
			word++;
		}
	}
	return (word);
}

void		ft_splity(char **tab, char *str, char *charset)
{
	int i;
	int j;
	int ind;

	i = 0;
	ind = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (str[i + j] != '\0' && is_charset(str[i + j], charset) == 0)
				j++;
			if (!(tab[ind] = (char *)malloc(sizeof(char) * (j + 1))))
				return ;
			ft_strncpy(tab[ind], &str[i], j);
			ind++;
			i = i + j;
		}
	}
	tab[ind] = 0;
}

t_dicost	*ft_split(char *str, char *charset)
{
	char	**tab;
	int		lentab;

	if (str == NULL || charset == NULL)
		return (0);
	lentab = ft_countword(str, charset);
	if (!(tab = (char **)malloc(sizeof(char *) * (lentab + 1))))
		return (0);
	ft_splity(tab, str, charset);
	return (ft_instruc(lentab, tab));
}
