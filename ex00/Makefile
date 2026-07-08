# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asando <asando@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/30 15:25:53 by asando            #+#    #+#              #
#    Updated: 2026/07/08 14:41:18 by asando           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CPP_STD := c++98
CFLAGS := -Wall -Werror -Wextra -std=$(CPP_STD)
INCLUDE := .

SRCS_DIR := .
SRC_FILES := ClapTrap.cpp main.cpp
SRCS := $(addprefix $(SRCS_DIR)/, $(SRC_FILES))

OBJS_DIR := obj
OBJS := $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)

NAME := ClapTrap

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

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
