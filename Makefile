# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/01 23:23:38 by jihoolee          #+#    #+#              #
#    Updated: 2024/09/16 22:26:38 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NASM        = nasm
NASM_FLAGS  = -f macho64
AR          = ar
ARFLAGS     = rcs
RM          = rm -rf

NAME        = libasm.a

SRC_DIR     = srcs
SRCS        = ft_strcpy.s

OBJ_DIR     = objs
OBJS        = $(addprefix $(OBJ_DIR)/, $(SRCS:%.s=%.o))

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.s $(OBJ_DIR)
	$(NASM) $(NASM_FLAGS) $< -o $@

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
