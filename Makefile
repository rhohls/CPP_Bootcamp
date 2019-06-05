# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/22 11:19:09 by rhohls            #+#    #+#              #
#    Updated: 2019/06/05 10:48:06 by rhohls           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

#Paths
SRC_PATH = ./src/
OBJ_PATH = ./obj/
INC_PATH = ./includes/

#Files
SRC_FILE =	.cpp \
			.cpp \

OBJ_FILE = $(SRC_FILE:%.cpp=%.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_FILE))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_FILE))

#Additional
MAIN ?= main.cpp

#Compiler
CCFLAGS = -Wall -Wextra -Werror
CC = clang++ $(CCFLAGS)


#Commands
all: $(NAME)

$(NAME): $(SRC_PATH) $(OBJ_PATH) $(INC_PATH) $(OBJ)
    $(CC) -o $@ $(OBJ)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
    $(CC) -I$(INC_PATH) -o $@ -c $<

clean:
    /bin/rm -rf $(OBJ)

fclean: clean
    /bin/rm $(NAME)

re: fclean all

.PHONY: re fclean clean all

#mkdir
$(OBJ_PATH):
    mkdir $(OBJ_PATH)

$(INC_PATH):
    mkdir $(INC_PATH)

$(SRC_PATH):
    mkdir $(SRC_PATH)
