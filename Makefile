# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 11:13:30 by fvarrin           #+#    #+#              #
#    Updated: 2021/10/28 10:27:35 by fvarrin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		  	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c ft_memchr.c
OBJ		= $(SRC:.c=.o)
CC 		= gcc
AR 		= ar rc
NAME 		= libft.a
TESTNAME	= test.o
NORM_BIN	= norminette
NORM_FLAGS	= -RCheckForbiddenSourceHeader -RCheckDefine
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror -I.
TESTFLAGS	= -L. -lft

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

main:		${NAME}
		${CC} ${CFLAGS} main.c ${TESTFLAGS} -o ${TESTNAME}
		./${TESTNAME}

test: 		${NAME}
		cd libftTester && make m
lint:		fclean
		${NORM_BIN} ${NORM_FLAGS}
