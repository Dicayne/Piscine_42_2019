/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:42:16 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/15 20:10:06 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	t_dicost	*new;
	int			i;

	i = 0;
	new = ft_intab();
	while (new[i].str)
	{
		printf("%d  ", new[i].key);
		printf("%s\n", new[i].str);
		i++;
	}
	return (0);
}
