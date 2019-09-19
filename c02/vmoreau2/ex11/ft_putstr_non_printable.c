/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 15:26:09 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/02 22:20:10 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_tohexa(unsigned char c)
{
	unsigned char *class;

	class = (unsigned char *)"0123456789abcdef";
	ft_putchar(class[c / 16]);
	ft_putchar(class[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			c = str[i];
			ft_convert_tohexa((unsigned char)c);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
