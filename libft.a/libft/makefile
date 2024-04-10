LIB = libft.a
CC = cc
SRC = $(wildcard ft_*.c)
FLAGS = -Wall -Werror -Wextra
OBJS = $(SRC:.c=.o)


all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(LIB)

re: fclean all


