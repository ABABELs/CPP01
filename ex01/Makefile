# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: babels <babels@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 14:17:07 by babels            #+#    #+#              #
#    Updated: 2023/11/28 14:35:28 by babels           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
SOURCES = main.cpp Zombie.Classe.cpp ZombieHorde.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

%.o: %.c++
	$(CC) -c $(CFLAGS) -g3 $< -o $@ -I

${NAME}: ${OBJECTS}
	$(CC) $(CFLAGS) -g3 -o ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}
	
fclean: clean
	rm -f ${NAME}

re: fclean all