NAME = linked_lists

PATH_SRCS = ./
PATH_OBJS = ./objects/

SRCS =	main.c \
		linked_list.c
OBJS = ${SRCS:%.c=$(PATH_OBJS)%.o}

INCLUDE = -I ./
FLAGS = -Wall -Wextra -Werror -ggdb

all: $(NAME)

run: all
	./$(NAME)

valgrind: all
	valgrind ./$(NAME)

$(NAME): $(OBJS)
	@gcc $(FLAGS) $(OBJS) -o $(NAME)

$(PATH_OBJS)%.o: $(PATH_SRCS)%.c
	@mkdir -p $(PATH_OBJS)
	@gcc $(FLAGS) $(INCLUDE) -c $< -o $@
	@echo "\033[1;92m[SUCCESS] Object" $@ "created!\033[0m"

clean:
	@rm -rf $(PATH_OBJS)
	@echo "\33[1;93m[SUCCESS] Objects removed!\33[0m"

fclean: clean
	@rm -f $(NAME) $(TESTS)
	@echo "\033[1;93m[SUCCESS] Full clean done!\33[0m"

re: fclean all
	
.PHONY: all clean fclean re
