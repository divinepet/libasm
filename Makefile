SHELL=/bin/bash
NAME = libasm.a
HEADER = libasm.h
CFLAGS = -Wall -Werror -Wextra
BLACK        := $(shell tput -Txterm setaf 0)
RED          := $(shell tput -Txterm setaf 1)
GREEN        := $(shell tput -Txterm setaf 2)
YELLOW       := $(shell tput -Txterm setaf 3)
LIGHTPURPLE  := $(shell tput -Txterm setaf 4)
PURPLE       := $(shell tput -Txterm setaf 5)
BLUE         := $(shell tput -Txterm setaf 6)
WHITE        := $(shell tput -Txterm setaf 7)
RESET := $(shell tput -Txterm sgr0)

SRS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s ft_write.s ft_read.s
OBJ = ft_strlen.o ft_strcpy.o ft_strcmp.o ft_strdup.o ft_write.o ft_read.o
all: $(NAME)

$(OBJ): %.o: %.s
	@echo '${WHITE}Add object file...${RESET}'`nasm -f macho64 -s $<`''

$(NAME): $(OBJ) $(HEADER)
	@echo '${GREEN}Successfully completed!${RESET}'`ar rc $(NAME) $(OBJ)`''
	@echo '${PURPLE}PRINT ./test to RUN${RESET}'`gcc main.c tests.c $(CFLAGS) $(OBJ) -L. -lasm -o test`''

clean:
	@echo '${LIGHTPURPLE}Object files have been cleaned up${RESET}'`rm -f $(OBJ)`''

fclean:	clean
	@echo '${PURPLE}Library have been cleaned up${RESET}'`rm -f $(NAME) test`''

re:		fclean all

.PHONY: all clean fclean re
