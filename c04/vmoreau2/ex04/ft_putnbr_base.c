/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:22:12 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/11 12:17:15 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_check_error(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[j] == '-' || base[j] == '+')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			j;
	int			len;
	long int	nb;

	len = ft_strlen(base);
	nb = 0;
	if (ft_strlen(base) < 2 || ft_check_error(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
			nb = (long int)nbr;
		nbr = nbr * -1;
	}
	i = 1;
	while ((nbr / i) >= len)
	{
		i = i * len;
	}
	while (i > 0)
	{
		j = (nbr / i) % len;
		ft_putchar(base[j]);
		i = i / len;
	}
}

int     main(void)
{
    char    *basebi = "01";
    char    *basehexa = "0123456789ACDEF";
    char    *baseoct = "01234567";
    char    *basedec = "0123456789";
    int     nbr = -2147483648;

    ft_putnbr_base(nbr, basebi);
    ft_putchar(10);
    ft_putnbr_base(nbr, basehexa);
    ft_putchar(10);
    ft_putnbr_base(nbr, baseoct);
    ft_putchar(10);
    ft_putnbr_base(nbr, basedec);
}
