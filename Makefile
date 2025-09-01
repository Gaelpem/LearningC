CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRC_DIR = src
INC_DIR = include



SRCS = brouillon.c exercice.c
OBJS = $(SRCS:.c=.o)
NAME = brouillon

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(INC_DIR) -o $(NAME) $(OBJS)
	./brouillon 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all% 