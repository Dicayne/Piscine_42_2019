/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 12:29:49 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/01 13:32:24 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int bool;
	int i;

	bool = 0;
	i = 0;
	if (*str == '\0')
	{
		bool = 1;
		return (bool);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
