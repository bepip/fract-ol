NAME	=	libft.a
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
CFILES	=	ft_tolower.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_isalnum.c \
		ft_strrchr.c \
		ft_split.c \
		ft_striteri.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_strlen.c \
		ft_strnstr.c \
		ft_isalpha.c \
		ft_memmove.c \
		ft_strncmp.c \
		ft_isprint.c \
		ft_atoi.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_memcmp.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_calloc.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_memset.c \
		ft_toupper.c \
		ft_itoa.c \
		ft_putstr_fd.c \
		ft_memcpy.c \
		ft_abs.c \
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

SRC_PATH = src/
OBJ_PATH = obj/
OBJ	=	$(CFILES:.c=.o)
OBJS = $(addprefix $(OBJ_PATH), $(OBJ))
AR	=	ar rcs

all:	$(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@ -I ./

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS)  -c $?

clean:
	rm -rf $(OBJ_PATH)

fclean:	clean
	rm -f $(NAME)

re: fclean all
