NAME = client
NAME2 = server

FUNCTIONS = ./srcs/client \
			./srcs/utils/print_error \
			./srcs/utils/ft_putstr \
			./srcs/send_message \
			./srcs/my_handler \
			./srcs/utils/ft_putchar \
			./srcs/char_to_bin 

	

FUNC = 		./srcs/server \
			./srcs/bin_to_char \
			./srcs/my_handler2 \
			./srcs/utils/print_error \
			./srcs/utils/ft_putstr \
			./srcs/utils/ft_putnbr \
			./srcs/utils/ft_putchar 


FLAGS = -Wall -Wextra -Werror

SRC = $(addsuffix .c, $(FUNCTIONS))
EXCH = $(addsuffix .o, $(FUNCTIONS))

SRC2 = $(addsuffix .c, $(FUNC))
EXCH2 = $(addsuffix .o, $(FUNC))

all: $(NAME) $(NAME2)

$(NAME): $(EXCH)
	gcc $(FLAGS) $(EXCH) -o $(NAME)

$(NAME2): $(EXCH2)
	gcc $(FLAGS) $(EXCH2) -o $(NAME2)

%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

clean:
	/bin/rm -f ./srcs/*.o
	/bin/rm -f ./srcs/utils/*.o

fclean: clean
	/bin/rm -f $(NAME) $(NAME2)

re: fclean all
