cmake_minimum_required(VERSION 3.15)
project(pushswap C)

set(CMAKE_C_STANDARD 99)

add_executable(pushswap main.c list_functions.c push_swap.h ../../gnl/get_next_line.c ../../gnl/libft/ft_atoi.c
        ../../gnl/libft/ft_strchr.c
        ../../gnl/libft/ft_strdup.c
        ../../gnl/libft/ft_strjoin.c
        ../../gnl/libft/ft_strnew.c
        ../../gnl/libft/ft_strcmp.c
        ../../gnl/libft/ft_strdel.c
        ../../gnl/libft/ft_strlen.c
        ../../gnl/libft/ft_strsub.c check_functions.c
        ../../gnl/libft/ft_isdigit.c do_action.c push_swap.c push_swap_min.c common_actions.c push_min_op.c clear_pushswap.c)