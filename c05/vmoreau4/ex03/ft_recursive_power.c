/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:50:23 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/09 14:00:15 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int ret;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	ret = 0;
	if (power == 1)
	{
		ret = nb;
		return (ret);
	}
	else
	{
		ret = nb * ft_recursive_power(nb, power - 1);
	}
	return (ret);
}
