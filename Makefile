# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 11:13:30 by fvarrin           #+#    #+#              #
#    Updated: 2021/10/25 11:46:52 by fvarrin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR		= srcs
HEADER_DIR	= includes
SRC		= ${SRC_DIR}/ft_isalpha.c
OBJ		= $(SRC:.c=.o)
CC 		= gcc
AR 		= ar rc
NAME 		= libft.a
NORM_BIN	= norminette
NORM_FLAGS	= -RCheckForbiddenSourceHeader -RCheckDefine
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror -I${HEADER_DIR}

.PHONY: 	all clean fclean re

${NAME}:	${OBJ}
		${AR} ${NAME} ${OBJ}

all: 		${NAME}

clean:
		${RM} ${OBJ}

fclean: 	clean
		${RM} ${NAME}
		${RM} ${DNAME}

re:		fclean ${NAME}

test: 		${NAME}
		${CC} ${CFLAGS} main.c -L. -lft -o test.o

lint:		fclean
		${NORM_BIN} ${NORM_FLAGS} 
