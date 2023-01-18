# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lide <lide@student.s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 18:59:10 by lide              #+#    #+#              #
#    Updated: 2023/01/18 15:46:14 by lide             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

END=$ \x1b[0m
RED=$ \x1b[31m
GREEN=$ \x1b[32m

SRCS		=	main.cpp\
				Animal.cpp\
				Cat.cpp\
				Dog.cpp\
				WrongAnimal.cpp\
				WrongCat.cpp\
				Brain.cpp

NAME		=	Brain
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
