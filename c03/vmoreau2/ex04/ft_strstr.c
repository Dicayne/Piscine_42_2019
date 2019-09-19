/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 11:56:26 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/03 20:02:33 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_needle(char *str, char *to_find, int i)
{
	int j;
	int u;
	int bool;

	u = i;
	j = 0;
	bool = 0;
	while (to_find[j] != '\0')
	{
		if (str[u] == to_find[j])
		{
			bool = 1;
		}
		else
		{
			bool = 0;
			break ;
		}
		j++;
		u++;
	}
	return (bool);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (check_needle(str, to_find, i) == 1)
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
