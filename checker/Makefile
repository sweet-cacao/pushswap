NAME	= checker

INC_DIR	= ./includes
SRC_DIR = ./src/

FRAME = -framework OpenGL -framework AppKit

SRC		= check_functions.c \
			do_action.c \
			draw.c \
			extra_functions.c \
			instr_functions.c \
			instruction_functions.c \
			list_functions.c \
			main.c \
			parse.c \


LIBFT	= ./libft
MLX		= ./minilibx_macos

IFL		= -I$(INC_DIR)

WFL 	= -Wall -Wextra -Werror

SRCS	= $(addprefix $(SRC_DIR), $(SRC))

all: $(NAME)

$(NAME):
	$(MAKE) -C $(LIBFT)/
	$(MAKE) -C $(MLX)/
	gcc  $(SRCS) $(LIBFT)/libft.a $(MLX)/libmlx.a $(IFL) $(FRAME) -o $(NAME)

clean:
	$(MAKE) -C $(LIBFT)/ft_str clean
	$(MAKE) -C $(MLX) clean
	rm -rf $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT)/ft_str fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
