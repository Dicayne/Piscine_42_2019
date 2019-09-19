/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 13:00:55 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/01 13:31:09 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
		if (str[i] >= '0' && str[i] <= '9')
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
