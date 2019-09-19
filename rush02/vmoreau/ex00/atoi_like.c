/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_like.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:58:28 by bvalette          #+#    #+#             */
/*   Updated: 2019/09/16 09:13:09 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_stock		ft_atoi(char *str)
{
	int		i;
	int		size;
	t_stock	output = {0, 0, 0};

	i = 0;
	size = 0;
	if (str[i] == '\0')
		return (output);
	while (str[size + 1])
		size++;
	while (size >= 0)
	{
		if (size == 2)
			output.x = (str[i] - 48) * 100;
		else if (size == 1)
			output.y = (str[i] - 48) * 10;
		else if (size == 0)
			output.z = (str[i] - 48);
		size--;
		i++;
	}
	return (output);
}
