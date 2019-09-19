#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 16:08:59 by vmoreau           #+#    #+#              #
#    Updated: 2019/09/13 18:25:18 by vmoreau          ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c\
	  srcs/ft_strlen.c srcs/ft_strcmp.c

CFLAGS = -Wall -Wextra -Werror

INCL = includes

OBJ = ${SRC:.c=.o}

LIBCREA = ar rc

.c.o :
	gcc ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCL}

${NAME} : ${OBJ}
	${LIBCREA} ${NAME} ${OBJ}

all : ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm ${NAME}

re : fclean all

.PHONY : all clean fclean re .c.o