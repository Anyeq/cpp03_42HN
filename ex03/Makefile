# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asando <asando@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/05 14:46:20 by asando            #+#    #+#              #
#    Updated: 2026/07/08 18:57:08 by asando           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CPP_STD := c++98
CFLAGS := -Wall -Wextra -Werror -std=$(CPP_STD)
INCLUDES := .

SRCS_DIR := .
SRC_FILES := ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp
SRCS := $(addprefix $(SRCS_DIR)/, $(SRC_FILES))

OBJS_DIR := obj
OBJS := $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)

NAME := DiamondTrap

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -rf $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re
