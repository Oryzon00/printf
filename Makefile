SRCS = 

OBJS = $(SRCS:.c=.o)

BONUS =

BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I

NAME = libftprintf.a

LIBPATH = libft/

LIB = libft.a

%.o: %.c
	gcc -Wall -Werror -Wextra -c $< -o $@

all: $(NAME)

$(NAME):	$(OBJS)
			make -C $(LIBPATH)
			ar rcs $(NAME) $(OBJS) $(LIBPATH) $(LIB)

clean:
			rm -f $(OBJS) $(BONUS_OBJS)

fclean:		clean
			rm -f $(NAME)

re: 		fclean $(NAME)

bonus:		$(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:		all clean fclean re bonus