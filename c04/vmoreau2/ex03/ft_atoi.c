/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:07:55 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/10 14:59:38 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int atoi;
	int less;

	less = 0;
	i = 0;
	atoi = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			less++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + str[i] - '0';
		i++;
	}
	if (less % 2 == 1)
		atoi = atoi * -1;
	return (atoi);
}
