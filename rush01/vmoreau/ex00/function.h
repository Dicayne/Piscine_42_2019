/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:00:43 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/08 22:50:43 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H
# include <stdlib.h>
# include <unistd.h>

int		**ft_alloc(int **map);
void	ft_init_map(int **map);
void	ft_init_arg(char *str, int **arg);
void	ft_putint(int a);
void	ft_putchar(char c);
void	display(int **map);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		error_gest(int **map, int **arg, char *str);
int		check_vew_hori1(int **arg, int **map, int *xy, int val);
int		check_vew_hori2(int **arg, int **map, int *xy, int val);
int		checkvuehori(int **arg, int **map, int *xy, int k);

#endif
