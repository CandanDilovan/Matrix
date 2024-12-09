# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 12:55:45 by dcandan           #+#    #+#              #
#    Updated: 2024/12/09 14:29:06 by dcandan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = matrix
SOURCES = main.cpp vector_struct.cpp
			
OBJECTS = $(SOURCES:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

all: ${NAME}

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

${NAME}: ${OBJECTS}
	$(CC) $(CFLAGS) -o ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}
	
fclean: clean
	rm -f ${NAME}

re: fclean all