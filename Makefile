NAME = libftprintf.a
SOURCES = ft_printf.c ft_utils.c ft_utils1.c ft_utils2.c

OBJECTS = $(SOURCES:.c=.o)
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f
CC = cc

all: $(NAME)
$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)
%.o: %.c libftprintf.h
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

bonus: $(OBJECTS) $(BONUS_OBJECTS)
	$(AR) $(NAME) $(OBJECTS) $(BONUS_OBJECTS)

.PHONY: all clean fclean re