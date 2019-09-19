# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/10 13:56:26 by julnolle          #+#    #+#              #
#    Updated: 2019/09/19 18:27:23 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bsq

SRCS 	= srcs/*.c

INCLUDES = includes

OBJS 	= ${SRCS:.c=.o}

GCC		= gcc
RM		= rm -f

AR		= ar rc

CFLAGS	= -Wall -Wextra -Werror -I${INCLUDES}

.c.o:
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	
			${GCC} ${CFLAGS} -o ${NAME} ${SRCS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
		   	${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
