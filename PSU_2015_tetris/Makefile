CC	= gcc

RM	= rm -f

NAME	= tetris

SRC	= src/main.c \
	  built/print_win.c \

OBJ	= $(SRC:.c=.o)

LD_FLAG	= -lncurses

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LD_FLAG)

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(OBJ)

re: fclean clean all

.PHONY: re fclean clean all

