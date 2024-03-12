
NAME = push_swap.a
SOURCES = \
	./error/error.c ./error/lstclear.c ./error/charfree.c ./movements/pa.c \
	./movements/pb.c ./movements/ra.c ./movements/rb.c ./movements/rr.c \
	./movements/sa.c ./movements/sb.c ./movements/ss.c ./movements/rra.c \
	./movements/rrb.c ./movements/rrr.c ./parsing/lstnew.c ./parsing/checker.c \
	./parsing/cleaner.c ./parsing/parsing.c ./parsing/intcompare.c \
	./parsing/lstadd_back.c ./sorting/sort2.c ./sorting/sorter3.c \
	./sorting/sorter4.c ./sorting/sorter5.c ./sorting/bubblesort.c \
	./utils/atoi.c ./utils/free.c ./utils/split.c ./utils/utils.c \
	./utils/append.c ./utils/calloc.c ./utils/memset.c ./utils/strlen.c \
	./utils/counter.c ./utils/strlcpy.c ./utils/issorted.c ./utils/lstcount.c \
	./utils/listprinter.c push_swap.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

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

