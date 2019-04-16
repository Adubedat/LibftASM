NAME = libfts.a

SRC = ft_bzero.s

OBJ_FOLDER = obj
OBJ_NAME = $(SRC:.s=.o)
OBJ = $(addprefix $(OBJ_FOLDER)/,$(OBJ_NAME))

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	printf "\e[32m----------------------------------\e[36m\n"
	printf "\e[32m[✔]\e[36m $@"
	printf "\n\e[32m----------------------------------\e[36m"
	printf "\033[0m\n"

$(OBJ_FOLDER)/%.o: %.s
	mkdir $(OBJ_FOLDER)
	nasm -f macho64 $< -o $@
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
	rm -f $(NAME)
	printf "\e[31m----------------------------------\n"
	printf "[✔]\e[36m $(NAME): All deleted\n"
	printf "\e[31m----------------------------------\e[36m"
	printf "\033[0m\n"

re: fclean all

.PHONY: all fclean clean re