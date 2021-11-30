# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajung <ajung@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 18:03:55 by ajung             #+#    #+#              #
#    Updated: 2021/11/30 16:38:40 by ajung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	srcs/ft_printf.c \
		srcs/ft_putstr_pf.c \
		srcs/ft_putnbr_pf.c \
		srcs/ft_putchar_pf.c \
		srcs/ft_putnbrbase_pf.c \
		srcs/ft_putnbrlgbase_pf.c \

OBJS = $(SRCS:.c=.o)

BONUS =

BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I

NAME = libftprintf.a

%.o: %.c
	gcc -Wall -Werror -Wextra -c $< -o $@

all: $(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS) $(BONUS_OBJS)

fclean:		clean
			rm -f $(NAME)

re: 		fclean $(NAME)

bonus:		$(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:		all clean fclean re bonus