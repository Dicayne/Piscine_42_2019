/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:54:02 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/05 19:12:47 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_first_lane(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('A');
			if (x == 1)
			{
				ft_putchar(10);
			}
		}
		else if (i == x)
		{
			ft_putchar('C');
			ft_putchar(10);
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
}

void	display_last_lane(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('A');
		}
		else if (i == x)
		{
			ft_putchar('C');
			ft_putchar(10);
		}
		else
		{
			ft_putchar('B');
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
			ft_putchar('B');
			if (x == 1)
			{
				ft_putchar(10);
			}
		}
		else if (i == x)
		{
			ft_putchar('B');
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
			display_first_lane(x);
		}
		else if (j == y)
		{
			display_last_lane(x);
		}
		else
		{
			display_middle_lane(x);
		}
		j++;
	}
}
