/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:09:48 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/19 17:48:39 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	do_op(t_nb nb, int ret, char *op)
{
	if (nb.b == 0 && (op[0] == '/' || op[0] == '%'))
	{
		if (op[0] == '/')
			ft_putstr("Stop : division by zero");
		if (op[0] == '%')
			ft_putstr("Stop : modulo by zero");
		return ;
	}
	if (op[0] == '+')
		ret = addit(nb.a, nb.b);
	else if (op[0] == '-')
		ret = soust(nb.a, nb.b);
	else if (op[0] == '*')
		ret = multi(nb.a, nb.b);
	else if (op[0] == '/')
		ret = divis(nb.a, nb.b);
	else if (op[0] == '%')
		ret = modul(nb.a, nb.b);
	ft_putnbr(ret);
}

void	recup_don(char *v1, char *v2, char *op)
{
	t_nb	nb;
	int		ret;

	ret = 0;
	nb.a = ft_atoi(v1);
	nb.b = ft_atoi(v2);
	do_op(nb, ret, op);
}
