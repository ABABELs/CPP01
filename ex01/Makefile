# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabel <aabel@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 14:17:07 by babels            #+#    #+#              #
#    Updated: 2023/12/19 14:02:10 by aabel            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
SOURCES = main.cpp Zombie.Classe.cpp ZombieHorde.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.c++
	$(CXX) -c $(CXXFLAGS) -g3 $< -o $@ -I

${NAME}: ${OBJECTS}
	$(CXX) $(CXXFLAGS) -g3 -o ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}
	
fclean: clean
	rm -f ${NAME}

re: fclean all