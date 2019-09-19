/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 10:20:47 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/09 13:56:56 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int ret_nb;

	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	ret_nb = 0;
	if (nb == 1)
	{
		ret_nb = 1;
		return (ret_nb);
	}
	else
	{
		ret_nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (ret_nb);
}
