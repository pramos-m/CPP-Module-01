# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 19:26:26 by pramos-m          #+#    #+#              #
#    Updated: 2023/08/22 12:56:21 by pramos-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon
SRC_DIR = src
INC_DIR = inc

SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/Weapon.cpp $(SRC_DIR)/HumanA.cpp $(SRC_DIR)/HumanB.cpp
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