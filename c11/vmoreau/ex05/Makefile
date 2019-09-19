# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 18:15:52 by vmoreau           #+#    #+#              #
#    Updated: 2019/09/19 18:27:22 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do_op

SRCS = srcs/*.c

INCLUDES = includes

GCC = gcc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -I${INCLUDES}

${NAME}:
			${GCC} ${CFLAGS} -o ${NAME} ${SRCS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean: clean
			${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
