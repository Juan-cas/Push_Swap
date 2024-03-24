
NAME = push_swap.a
SOURCES = \
	./error/error.c ./error/lstfree.c ./error/charfree.c ./movements/pa.c \
	./movements/pb.c ./movements/ra.c ./movements/rb.c ./movements/rr.c \
	./movements/sa.c ./movements/sb.c ./movements/ss.c ./movements/rra.c \
	./movements/rrb.c ./movements/rrr.c ./utils/lstnew.c ./utils/checker.c \
	./utils/cleaner.c ./utils/intcompare.c ./utils/strlcpy.c ./sorting/sort4.c\
	./utils/lstaddback.c ./sorting/sort2.c ./sorting/sort3.c ./sorting/sort5.c \
	./sorting/bubblesort.c ./sorting/biggest.c \
	./utils/atol.c ./utils/split.c ./utils/putnbr.c ./utils/strlcpy.c \
	./utils/append.c ./utils/calloc.c ./utils/strlen.c ./utils/memset.c \
	./utils/strlcpy.c ./utils/issorted.c ./utils/lstcount.c ./utils/listcreator.c \
	./utils/listprinter.c ./utils/isdigit.c push_swap.c ./error/silent_error.c \
	./utils/isdigit.c ./utils/issign.c ./utils/isspace.c ./utils/lastnode.c \
	./utils/where_small.c ./utils/find_smallest.c ./utils/issorted.c ./sorting/init_sorter.c \
	./sorting/init_sorter.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

AR = ar
ARFLAGS = -r

RM = rm -rf

# Add subdirectories to VPATH
VPATH = ./error:./movements:./parsing:./sorting:./utils

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(ARFLAGS) $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

