# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 17:25:08 by gstarvin          #+#    #+#              #
#    Updated: 2020/02/27 15:29:49 by gstarvin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= checker
NAME2	= push_swap
INC_DIR	= ./includes
SRC_DIR = ./src/
SRC_PUSH = ./src2/
FL = -Wall -Wextra -Werror

FRAME = -framework OpenGL -framework AppKit

SRC_COM			= check_functions.c \
			instruction_functions.c \
			parse.c \
			list_functions.c \
			extra_functions.c \
		   instr_functions.c	

SRC_CHECK		= do_action.c \
			draw.c \
			main.c \
			visual_gen.c \
			order.c

SRC_P		= do_action_push_swap.c \
		help_functions.c \
		main_push_swap.c \
		push_a.c \
		push_in_a.c \
		push_swap_min.c \
		push_swap.c \
		do_act_push_swap.c \
		make_sort.c	

OBJ_DIR = ./objects/

PUSH_SWAP_FILES = $(patsubst %.c, %.o, $(SRC_P) $(SRC_COM))
PUSH_SWAP_OBJECTS = $(addprefix $(OBJ_DIR), $(PUSH_SWAP_FILES))

CHECKER_FILES = $(patsubst %.c, %.o, $(SRC_CHECK) $(SRC_COM))
CHECKER_OBJECTS = $(addprefix $(OBJ_DIR), $(CHECKER_FILES))

HEADERS_DIRECTORY = ./includes/
HEADER_FILES = push_swap.h
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADER_FILES))

LIBFT	= ./libft
MLX		= ./minilibx_macos

IFL		= -I$(INC_DIR)

WFL 	= -Wall -Wextra -Werror

SRCS_COM	= $(addprefix $(SRC_DIR), $(SRC_COM))
SRCS_CHECK	= $(addprefix $(SRC_DIR), $(SRC_CHECK))
SRCS_P		= $(addprefix $(SRC_PUSH), $(SRC_P))

all: $(NAME) $(NAME2)

$(NAME2): $(PUSH_SWAP_OBJECTS)
	$(MAKE) -C $(LIBFT)/
	gcc $(FL) $^ $(LIBFT)/libftprintf.a $(IFL) -o $(NAME2)

$(NAME): $(CHECKER_OBJECTS)
	$(MAKE) -C $(LIBFT)/
	$(MAKE) -C $(MLX)/
	gcc $(FL) $^ $(LIBFT)/libftprintf.a $(MLX)/libmlx.a $(IFL) $(FRAME) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEADERS)
	mkdir -p ./objects
	gcc $(FL) -c $< -o $@ -I $(HEADERS_DIRECTORY)

$(OBJ_DIR)%.o: $(SRC_PUSH)%.c $(HEADERS)
	mkdir -p ./objects
	gcc $(FL) -c $< -o $@ -I $(HEADERS_DIRECTORY)

clean:
	$(MAKE) -C $(LIBFT) clean
	$(MAKE) -C $(MLX) clean
	/bin/rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT) fclean
	rm -rf $(NAME)
	rm -rf $(NAME2)

re: fclean all

.PHONY: all clean fclean re
