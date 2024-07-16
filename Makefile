NAME	=	fractol


CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
MLX_FLAGS=	-Lminilibx -lmlx_Linux -lX11 -lXext
CFILES	=	fractal.c \
		main.c	\
		ft_color.c \
		key_events.c \
		mouse_events.c \
		event_handler.c \
		initialize.c \
		render.c \
		input_check.c \
		free_fractal.c \
		utils.c	\
		change_set.c


OBJS	=	$(CFILES:.c=.o)

LIB_PATH	=	./libft
LIB		=	$(LIB_PATH)/libft.a \

MLX_PATH	=	./minilibx
MLX		=	$(MLX_PATH)/libmlx.a

INCLUDE		=	-I ./ \
			-I ./minilibx/ \
			-I ./libft \


all: $(MLX) $(LIB) $(NAME)

%.o:%.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(MLX):
	@echo "Compiling MLX..."
	@make -sC $(MLX_PATH)

$(LIB):
	@echo "Compiling libs..."
	@make -sC $(LIB_PATH)

$(NAME): $(OBJS)
	@echo "Compiling fract-ol..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MLX) $(LIB) $(INCLUDE) $(MLX_FLAGS)
	@echo "Done"

clean:
	@echo "Removing object files..."
	@rm -rf $(OBJS) 
	@make clean -sC $(LIB_PATH)
	@make clean -sC $(MLX_PATH)

fclean: clean
	@echo "Removing binary and libraries..."
	@rm -f $(NAME)
	@make fclean -sC $(LIB_PATH)
	@rm -f $(MLX)

re: fclean all
