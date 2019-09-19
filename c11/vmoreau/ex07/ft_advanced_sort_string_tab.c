/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:57:15 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/19 19:05:52 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advenced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		if (tab[i + 1] != '\0')
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				i = 0;
			}
		}
		i++;
	}
}
