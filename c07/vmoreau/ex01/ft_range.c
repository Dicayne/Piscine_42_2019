/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:48:09 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/09 22:15:40 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int ret;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (0);
	i = 0;
	ret = min;
	while (ret < max)
	{
		tab[i] = ret;
		i++;
		ret++;
	}
	return (tab);
}
