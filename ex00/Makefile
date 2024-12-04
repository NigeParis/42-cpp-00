###############################################################################
## ARGUMENTS

NAME= ex00
CFLAGS=  -Wall -Wextra -Werror -std=c++98

SRCS=$(addprefix $(SRC_DIR), $(SRC))
OBJ=$(SRC:.cpp=.o)
OBJS=$(addprefix $(OBJ_DIR), $(OBJ))


CC=c++
###############################################################################
## SOURCES 


SRC_DIR = src/
SRC = main.cpp
OBJ_DIR = build/

###############################################################################
## RULES

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating FILE .......\n"
	@$(CC) $(CFLAGS) $(OBJS) -o $@ >/dev/null

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@  > /dev/null

clean: 
	@echo "CLEAN all .o files .......\n"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "FCLEAN all .o et .a files .......\n"
	@rm -f $(NAME) > /dev/null

re: fclean all
	@echo "All erased and re-compiled .......\n"		

.PHONY: all clean fclean re