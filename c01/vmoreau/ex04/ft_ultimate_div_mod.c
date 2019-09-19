/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 21:21:57 by vmoreau           #+#    #+#             */
/*   Updated: 2019/08/29 21:31:54 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int stck_div;
	int stck_mod;

	stck_div = *a / *b;
	stck_mod = *a % *b;
	*a = stck_div;
	*b = stck_mod;
}
