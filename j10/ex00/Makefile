# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/18 08:56:32 by twavresk          #+#    #+#              #
#    Updated: 2015/08/18 11:13:20 by twavresk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(PATH)ft_putchar.c $(PATH)ft_putstr.c $(PATH)ft_strcmp.c \
	  $(PATH)ft_strlen.c $(PATH)ft_swap.c

PATH = ./srcs/

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

HEADER = ./includes/

all : $(NAME)

$(NAME) :
	gcc -c $(CFLAGS) $(HEADER) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -rf $(OBJ)

fclean : 
	rm -f $(NAME)

re : fclean all	 
