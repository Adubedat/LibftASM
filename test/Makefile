NAME = tests_exe

ROOT = ..

OBJ_FOLDER = obj
SRC_FOLDER = ./
LFT_PATH = $(ROOT)
DST_PATH = $(ROOT)

CC = gcc
CFLAGS =

LDFLAGS = -L$(LFT_PATH)
LDLIBS = -lfts

SRC_NAME =	main.c				\
			test_bzero.c		\
			test_cat.c			\
			test_isalnum.c		\
			test_isalpha.c		\
			test_isascii.c		\
			test_isdigit.c		\
			test_isprint.c		\
			test_memcpy.c		\
			test_memset.c		\
			test_puts.c			\
			test_strcat.c		\
			test_strdup.c		\
			test_strlen.c		\
			test_tolower.c		\
			test_toupper.c		\

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ = $(addprefix $(OBJ_FOLDER)/,$(OBJ_NAME))
SRC = $(addprefix $(SRC_FOLDER)/,$(SRC_NAME))
DST = $(addprefix $(DST_PATH)/,$(NAME))

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $(DST)
	printf "\e[32m----------------------------------\e[36m\n"
	printf "\e[32m[✔]\e[36m $@"
	printf "\n\e[32m----------------------------------\e[36m"
	printf "\033[0m\n"

$(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.c
	mkdir -p $(OBJ_FOLDER)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	printf "\e[32m[✔]\e[36m $@"
	printf "\033[0m\n"

clean:
	rm -f $(OBJ)
	@rmdir $(OBJ_FOLDER) 2> /dev/null || true
	printf "\e[31m----------------------------------\n"
	printf "[✔]\e[36m $(NAME): Objects deleted\n"
	printf "\e[31m----------------------------------\e[36m"
	printf "\033[0m\n"

fclean: clean
	rm -f $(DST)
	printf "\e[31m----------------------------------\n"
	printf "[✔]\e[36m $(DST): All deleted\n"
	printf "\e[31m----------------------------------\e[36m"
	printf "\033[0m\n"

re: fclean all

.PHONY: all fclean clean re