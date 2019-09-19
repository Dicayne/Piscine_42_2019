/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:54:02 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/01 11:56:31 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_first_last_lane(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('o');
			if (x == 1)
			{
				ft_putchar(10);
			}
		}
		else if (i == x)
		{
			ft_putchar('o');
			ft_putchar(10);
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
}

void	display_middle_lane(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('|');
			if (x == 1)
			{
				ft_putchar(10);
			}
		}
		else if (i == x)
		{
			ft_putchar('|');
			ft_putchar(10);
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int j;

	j = 1;
	while (j <= y)
	{
		if (j == 1)
		{
			display_first_last_lane(x);
		}
		else if (j == y)
		{
			display_first_last_lane(x);
		}
		else
		{
			display_middle_lane(x);
		}
		j++;
	}
}
