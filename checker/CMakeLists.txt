cmake_minimum_required(VERSION 3.15)
project(checker C)

set(CMAKE_C_STANDARD 99)

add_executable(checker main.c list_functions.c push_swap.h ../../gnl/get_next_line.c ../../gnl/libft/ft_atoi.c
        ../../gnl/libft/ft_strchr.c
        ../../gnl/libft/ft_strdup.c
        ../../gnl/libft/ft_strjoin.c
        ../../gnl/libft/ft_strnew.c
        ../../gnl/libft/ft_strcmp.c
        ../../gnl/libft/ft_strdel.c
        ../../gnl/libft/ft_strlen.c
        ../../gnl/libft/ft_strsub.c check_functions.c
        ../../gnl/libft/ft_isdigit.c do_action.c
        ../../gnl/libft/ft_lstadd.c
        ../../gnl/libft/ft_lstdel.c
        ../../gnl/libft/ft_lstnew.c
        ../../gnl/libft/ft_memcpy.c parse.c extra_functions.c instruction_functions.c instr_functions.c)