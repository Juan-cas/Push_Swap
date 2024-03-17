
NAME = push_swap.a
SOURCES = \
	./error/error.c ./error/lstfree.c ./error/charfree.c ./movements/pa.c \
	./movements/pb.c ./movements/ra.c ./movements/rb.c ./movements/rr.c \
	./movements/sa.c ./movements/sb.c ./movements/ss.c ./movements/rra.c \
	./movements/rrb.c ./movements/rrr.c ./utils/lstnew.c ./utils/checker.c \
	./utils/cleaner.c ./utils/intcompare.c ./utils/strlcpy.c \
	./utils/lstaddback.c ./sorting/sort2.c ./sorting/sort3.c \
	./sorting/bubblesort.c ./sorting/biggest.c ./utils/pibot.c \
	./utils/atol.c ./utils/split.c ./utils/putnbr.c ./utils/strlcpy.c \
	./utils/append.c ./utils/calloc.c ./utils/strlen.c ./utils/memset.c \
	./utils/strlcpy.c ./utils/issorted.c ./utils/lstcount.c ./utils/listcreator.c\
	./utils/listprinter.c ./utils/index.c ./utils/isdigit.c push_swap.c \
	./utils/isdigit.c ./utils/issign.c ./utils/isspace.c

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

