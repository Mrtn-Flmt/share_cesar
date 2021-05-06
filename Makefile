##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC =		main.c \
			error.c \
			fs_open_file.c \
			fs_read_file.c \
			src/cesar.c \
			src/get_content.c \
			src/majuscule.c \
			src/minuscule.c \
			print_in_file.c

OBJ =		$(SRC:.c=.o)

NAME =		cesar

CFLAGS =	-Iinclude -Llib/my -lmy

DEBUGFLAGS = -g

all:	$(NAME)

$(NAME):	$(OBJ)
			make -C lib/my
			make -C lib/my clean
			gcc -o $(NAME) $(SRC) $(CFLAGS)

debug:
			make -C lib/my
			make -C lib/my clean
			gcc -o $(NAME) $(SRC) $(CFLAGS) $(DEBUGFLAGS)

clean:
			rm -f $(OBJ)

fclean:clean
			rm -f $(NAME)

re:			fclean all
