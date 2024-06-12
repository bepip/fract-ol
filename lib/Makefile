NAME	=	libft.a
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
CFILES	=	ft_putchar.c \
		ft_printdecimal.c \
		ft_printf.c \
		ft_printhexa.c \
		ft_printchar.c \
		ft_printpercent.c \
		ft_printptr.c \
		ft_printstr.c \
		ft_printunint.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putuint.c
OBJ	=	$(CFILES:.c=.o)
LIBFT_PATH=	./libft
LIBFT	=	$(LIBFT_PATH)/libfts.a
INC	=	-I $(LIBFT_PATH)
AR	=	ar rcs

all:	$(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH)

$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(CFLAGS) $(INC) -c $?

clean:
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJ)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all
