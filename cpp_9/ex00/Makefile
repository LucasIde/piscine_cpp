# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lide <lide@student.s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 15:50:26 by lide              #+#    #+#              #
#    Updated: 2023/03/24 15:33:36 by lide             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

END=$ \x1b[0m
RED=$ \x1b[31m
GREEN=$ \x1b[32m

SRCS		=	main.cpp\
				BitcoinExchange.cpp

NAME		= btc
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
