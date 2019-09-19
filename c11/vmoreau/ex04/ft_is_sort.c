/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:09:12 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/19 18:32:04 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int bool;

	i = 0;
	bool = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			bool = 0;
		i++;
	}
	if (bool == 1)
		return (1);
	bool = 1;
	while (i > 1)
	{
		if ((*f)(tab[i], tab[i - 1]) > 0)
			bool = 0;
		i--;
	}
	if (bool == 1)
		return (1);
	return (0);
}
