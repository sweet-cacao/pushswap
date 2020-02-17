cmake_minimum_required(VERSION 3.15)
project(push_swap3 C)

set(CMAKE_C_STANDARD 99)

add_executable(push_swap3 main.c push_swap.h push_swap.c push_a.c push_in_a.c help_functions.c
        list_functions.c check_functions.c
        ../../gnl/libft/ft_isdigit.c
        ../../gnl/libft/ft_strcmp.c
        do_action.c push_swap_min.c
        ../../gnl/libft/ft_atoi.c
        ../../gnl/libft/ft_strlen.c
        ../../gnl/libft/ft_strsplit.c
        parse.c
        ../../gnl/libft/ft_strdel.c
        ../../gnl/libft/ft_strdup.c
        ../../gnl/libft/ft_memalloc.c
        ../../gnl/libft/ft_bzero.c)