# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 13:22:35 by ahaloui           #+#    #+#              #
#    Updated: 2023/03/03 21:23:05 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	push_swap

NAME_BONUS	=	checker


SRC			=	push_swap.c parsing.c lst_functions.c utils.c push_functions.c r_rotate_functions.c rotate_functions.c swap_functions.c\
				sort_three.c sort_five.c utils1.c sort_functions.c

SRC_BONUS	=	getnextline/get_next_line_utils.c checker.c getnextline/get_next_line.c

OBJ_BONUS	=	$(SRC_BONUS:.c=.o)

LIBFT		=	libft/libft.a

PRINTF		=   printf/libftprintf.a

OBJ			=	$(SRC:.c=.o)

CC			=	gcc

RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror 
# -g -fsanitize=address

$(NAME):	$(OBJ)
			make -C ./libft
			make -C ./printf
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(PRINTF)

bonus:		$(OBJ_BONUS)
			$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OBJ_BONUS) 		

all:		$(NAME)

clean:
			make clean -C libft
			${RM} $(OBJ)

fclean: 	clean
			make fclean -C libft
			${RM} $(NAME) ${OBJ} ${OBJ_BONUS}

re:			fclean all