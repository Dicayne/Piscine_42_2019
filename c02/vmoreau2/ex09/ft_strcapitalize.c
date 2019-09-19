/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 16:49:14 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/02 22:00:33 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_maj(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if ((str[i - 1] >= ' ' && str[i - 1] <= '/') ||
			(str[i - 1] >= ':' && str[i - 1] <= '@') ||
			(str[i - 1] >= '[' && str[i - 1] <= '`') ||
			(str[i - 1] >= '{' && str[i - 1] <= '~'))
		{
			str[i] = str[i] - 32;
		}
	}
}

void	check_min(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if ((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
			(str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
			(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			str[i] = str[i] + 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if (i >= 0)
		{
			check_maj(str, i);
			check_min(str, i);
		}
		i++;
	}
	return (str);
}
