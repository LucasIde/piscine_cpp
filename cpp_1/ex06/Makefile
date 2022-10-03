# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lide <lide@student.s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 18:59:10 by lide              #+#    #+#              #
#    Updated: 2022/10/03 19:32:34 by lide             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

END=$ \x1b[0m
RED=$ \x1b[31m
GREEN=$ \x1b[32m

SRCS		=	main.cpp\
				Harl.cpp

NAME		= harlFilter
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
CXX			=	c++
OBJS		=	${SRCS:.cpp=.o}

.cpp.o:
			@${CXX} ${CXXFLAGS} -c -I ./ $< -o ${<:.cpp=.o}

$(NAME):	${OBJS}
			@${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}
			@echo "${GREEN}|${NAME} created|${END}"

all :		${NAME}

clean:
			@rm -f ${OBJS}
			@echo "${RED}|cleaned|${END}"

fclean:
			@rm -f ${NAME} ${OBJS}
			@echo "${RED}|Fcleaned|${END}"

re:			fclean all

.PHONY: all fclean clean re
