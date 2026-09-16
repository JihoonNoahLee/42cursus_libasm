# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/01 23:23:38 by jihoolee          #+#    #+#              #
#    Updated: 2026/09/16 23:00:00 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NASM		= nasm
NASM_FLAGS	= -f macho64
AR			= ar
ARFLAGS		= rcs
RM			= rm -rf

NAME		= libasm.a

SRC_DIR		= src
SRCS		= ft_strlen.s

OBJ_DIR		= obj
OBJS		= $(SRCS:%.s=$(OBJ_DIR)/%.o)

TEST_DIR	= test
TEST_SRCS	= test_strlen.c
TEST_OBJS	= $(TEST_SRCS:%.c=$(TEST_DIR)/%.o)
TEST_NAME	= test.out

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.s | $(OBJ_DIR)
	$(NASM) $(NASM_FLAGS) $< -o $@

$(TEST_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) -arch x86_64 -I$(TEST_DIR) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

tclean:
	$(RM) $(TEST_OBJS) $(TEST_NAME)

re: fclean all

test: $(NAME) $(TEST_OBJS) main.c
	$(CC) -arch x86_64 main.c $(TEST_OBJS) -I$(TEST_DIR) -L. -lasm -o $(TEST_NAME)

.PHONY: all clean fclean re test tclean
