NAME = libftprintf.a

SRC = ft_printf.c ft_handle_specifier.c ft_putnbr_hex.c \
      print_char.c print_string.c print_num.c print_unsigned.c \
      print_percent.c print_pointer.c print_lowerhex.c print_higherhex.c \
      ft_utoa.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT_DIR)

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
