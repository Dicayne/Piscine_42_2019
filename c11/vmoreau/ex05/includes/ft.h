/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:56:06 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/19 18:05:40 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

/*
**STRUCT
*/
typedef struct	s_nb
{
	int a;
	int b;
}				t_nb;
/*
**FONCTION
*/
int				multi(int a, int b);
int				divis(int a, int b);
int				addit(int a, int b);
int				soust(int a, int b);
int				modul(int a, int b);
void			recup_don(char *v1, char *v2, char *op);
int				ft_atoi(char *str);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);

#endif
