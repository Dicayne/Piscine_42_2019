/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:09:41 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/01 13:28:28 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_empty_str(char *str, int bool)
{
	if (*str == '\0')
	{
		bool = 1;
	}
	return (bool);
}

int	ft_str_is_alpha(char *str)
{
	int bool;
	int i;

	bool = 0;
	i = 0;
	bool = check_empty_str(str, bool);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			bool = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			bool = 1;
		}
		else
		{
			bool = 0;
			break ;
		}
		i++;
	}
	return (bool);
}
