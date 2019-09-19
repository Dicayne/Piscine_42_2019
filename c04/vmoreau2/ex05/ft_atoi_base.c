/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 09:43:47 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/10 20:53:59 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_find_index(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_find_atoi(int index, char *str, char *base, int less)
{
	int atoi;
	int i;
	int len;

	len = ft_strlen(base);
	i = index;
	atoi = 0;
	while (ft_find_index(str[i], base) != -1)
	{
		atoi = atoi * len + ft_find_index(str[i], base);
		i++;
	}
	if (less % 2 == 1)
		atoi = atoi * -1;
	return (atoi);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int less;

	if (ft_check_error(base) == 0)
		return (0);
	less = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			less++;
		i++;
	}
	return (ft_find_atoi(i, str, base, less));
}
