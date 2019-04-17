NAME = libfts.a

OBJ_FOLDER = obj
SRC_FOLDER = src

SRC_NAME =	ft_bzero.s \
		ft_strcat.s \
		ft_isalpha.s \
		ft_isdigit.s \
		ft_isalnum.s \
		ft_isascii.s \
		ft_isprint.s \
		ft_toupper.s \
		ft_tolower.s \
		ft_puts.s \
		ft_strlen.s \
		ft_memset.s \
		ft_memcpy.s \
		ft_strdup.s \
		ft_cat.s \

OBJ_NAME = $(SRC_NAME:.s=.o)

OBJ = $(addprefix $(OBJ_FOLDER)/,$(OBJ_NAME))
SRC = $(addprefix $(SRC_FOLDER)/,$(SRC_NAME))

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	printf "\e[32m----------------------------------\e[36m\n"
	printf "\e[32m[✔]\e[36m $@"
	printf "\n\e[32m----------------------------------\e[36m"
	printf "\033[0m\n"

$(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.s
	mkdir -p $(OBJ_FOLDER)
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