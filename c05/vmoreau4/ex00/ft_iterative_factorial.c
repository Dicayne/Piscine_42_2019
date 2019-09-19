/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 09:46:43 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/09 13:57:40 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int nb_ret;

	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	nb_ret = nb;
	i = nb - 1;
	while (i >= 1)
	{
		nb_ret = nb_ret * i;
		i--;
	}
	return (nb_ret);
}
