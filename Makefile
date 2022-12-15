# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 22:46:15 by aoukhart          #+#    #+#              #
#    Updated: 2022/06/27 02:06:43 by aoukhart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c\
		lst.c\
		Moves/push_a.c\
		Moves/push_b.c\
		Moves/rb.c\
		Moves/ra.c\
		Moves/sa.c\
		Moves/sb.c\
		Moves/rra.c\
		Utils/Utils_1.c\
		Utils/Utils_2.c\
		sorts.c\

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

NAME = push_swap

all : $(NAME)

$(NAME) : $(OBJ)
	@gcc $(FLAGS) $(SRC) -o $(NAME)

clean :
	@rm -rf $(OBJ)
	
fclean : clean
	@rm -rf $(NAME)

re : fclean all	
