/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 16:15:41 by vmoreau           #+#    #+#             */
/*   Updated: 2019/08/31 10:11:51 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int savedvalue;

	i = 0;
	j = 0;
	savedvalue = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				savedvalue = tab[i];
				tab[i] = tab[j];
				tab[j] = savedvalue;
			}
			j++;
		}
		i++;
	}
}
