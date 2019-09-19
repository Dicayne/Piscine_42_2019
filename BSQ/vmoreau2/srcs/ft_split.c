/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:50:33 by julnolle          #+#    #+#             */
/*   Updated: 2019/09/18 23:08:44 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != 0)
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_strlen2(char *str, char *charset, int *i)
{
	int j;
	int k;

	j = *i;
	k = 0;
	while (!is_charset(str[j], charset))
		if (is_charset(str[j], charset))
			j++;
		else
		{
			k++;
			j++;
		}
	return (k);
}

char	*ft_strdup2(char *src, int *i, char *charset)
{
	char	*dest;
	int		j;
	int		word_size;

	word_size = ft_strlen2(src, charset, i);
	if (!(dest = (char*)malloc(sizeof(*dest) * word_size + 1)))
		return (NULL);
	j = 0;
	while (src[*i] != 0 && !is_charset(src[*i], charset))
	{
		dest[j] = src[*i];
		(*i)++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int		count_words(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (is_charset(str[i], charset) && !is_charset(str[i + 1], charset)
				&& str[i + 1] != 0)
			count++;
		i++;
	}
	if (!is_charset(str[0], charset))
		count++;
	return (count + 1);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;

	if (!(tab = malloc(sizeof(char*) * (count_words(str, charset) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset))
			i++;
		else
		{
			tab[j] = ft_strdup2(str, &i, charset);
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}
