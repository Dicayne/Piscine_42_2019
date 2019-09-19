/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:02:41 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/19 18:38:11 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *new;

	if (!(new = (int*)malloc(sizeof(int) * length)))
		return (0);
	i = 0;
	while (i < length)
	{
		new[i] = (*f)(tab[i]);
		i++;
	}
	return (new);
}
