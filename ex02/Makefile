# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 12:50:16 by pramos-m          #+#    #+#              #
#    Updated: 2023/08/22 12:50:19 by pramos-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Refs
SRC_DIR = src
INC_DIR = inc

SRC = $(SRC_DIR)/main.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -I$(INC_DIR) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re