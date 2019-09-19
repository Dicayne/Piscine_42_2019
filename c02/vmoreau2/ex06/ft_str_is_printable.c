/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 19:04:52 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/02 19:05:04 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (str[i] >= ' ' && str[i] <= '~')
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
