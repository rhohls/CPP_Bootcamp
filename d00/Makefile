# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhohls <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/22 11:19:09 by rhohls            #+#    #+#              #
#    Updated: 2018/07/09 07:36:32 by rhohls           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rhohls.filler

# Path
SRC_PATH = ./src/
OBJ_PATH = ./obj/
INC_PATH = ./includes/

# Files
SRC_FILE =	ai.c			\
			basic_moves.c	\
			complex_move.c	\

OBJ_FILE = $(SRC_FILE:%.c=%.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_FILE))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_FILE))

#Additional
MAIN ?= main.cpp
MAINT ?= main_test.cpp

#Compile
CCFLAGS = -Wall -Werror -Wextra
CC = clang++ $(CCFLAGS)

#Make Commands
all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIB_PATH)
	@$(CC) -o $@ $(OBJ) $(MAIN)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@$(CC) -I$(INC_PATH) -o $@ -c $<

test: compile
	@make -C $(LIB_PATH)
	@$(CC) -o $@ $(LIBF) $(OBJ) $(MAIN)
	./$(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all test clean