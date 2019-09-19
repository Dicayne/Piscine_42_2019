/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico_instruct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:40:00 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/15 19:27:28 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_dicost	*ft_instruc(int len, char **tab)
{
	int			i;
	t_dicost	*tabstc;

	i = 0;
	if (!(tabstc = (t_dicost *)malloc(sizeof(t_dicost *) * len + 1)))
		return (0);
	while (tab[i])
	{
		tabstc[i].str = tab[i];
		tabstc[i].key = i;
		i++;
	}
	return (tabstc);
}

t_dicost	*ft_intab(void)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open("dico.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Dict Error\n");
		return (0);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	return (ft_split(buf, " :0123456789\n"));
}
