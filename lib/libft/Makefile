NAME	=	libfts.a
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
		ft_memcpy.c  

#BCFILES	=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstiter.c \

OBJECTS	=	$(CFILES:.c=.o)

#BOBJECTS =	$(BCFILES:.c=.o)

AR	=	ar rcs

all:	$(NAME)


$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

#bonus: $(OBJECTS) $(BOBJECTS)
	#$(AR) $(NAME) $(BOBJECTS)

%.o:%.c
	$(CC) $(CFLAGS)  -c $?

clean:
	rm -f $(OBJECTS)
	#rm -f $(BOBJECTS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
