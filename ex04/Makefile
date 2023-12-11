# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: babels <babels@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 20:38:45 by babels            #+#    #+#              #
#    Updated: 2023/11/29 12:06:38 by babels           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = losers
SOURCES = main.cpp Replace.Class.cpp \

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