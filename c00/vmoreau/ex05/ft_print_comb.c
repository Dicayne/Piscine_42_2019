/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 23:13:12 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/13 11:04:32 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_it(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' | b != '8' | c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char n1;
	char n2;
	char n3;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	while (n1 <= '9')
	{
		n2 = n1 + 1;
		while (n2 <= '9')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				write_it(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

int main()
{
	ft_print_comb();
}
