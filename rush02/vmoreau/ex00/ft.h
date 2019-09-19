/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:48:24 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/15 21:56:24 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# define BUF_SIZE 4096

/*
** STRUCT
*/
typedef struct	s_dicost
{
	char	*str;
	int		key;
}				t_dicost;

typedef struct	s_stock
{
	int		x;
	int		y;
	int		z;
}				t_stock;

/*
** FT_DICO_INSTRUCT
*/
t_dicost		*ft_intab();
t_dicost		*ft_instruc(int len, char **tab);

/*
** FT_SPLIT
*/
char			*ft_strncpy(char *dest, char *src, int n);
int				is_charset(char c, char *charset);
int				ft_countword(char *str, char *charset);
void			ft_splity(char **tab, char *str, char *charset);
t_dicost		*ft_split(char *str, char *charset);

#endif
