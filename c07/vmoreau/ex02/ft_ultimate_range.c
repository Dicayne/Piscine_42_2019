/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:47:46 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/09 21:44:44 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int ret;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	ret = min;
	while (ret < max)
	{
		(*range)[i] = ret;
		i++;
		ret++;
	}
	return (max - min);
}
