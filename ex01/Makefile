###############################################################################
## ARGUMENTS

NAME= phonebook
CFLAGS=  -Wall -Wextra -Werror -std=c++98

SRCS=$(addprefix $(SRC_DIR), $(SRC))
OBJ=$(SRC:.cpp=.o)
OBJS=$(addprefix $(OBJ_DIR), $(OBJ))

INCLUDE = -I./include/

CC=c++
###############################################################################
## SOURCES 


SRC_DIR = src/
SRC = main.cpp PhoneBook.cpp Contact.cpp Add.cpp Add_tools.cpp Input_name.cpp
SRC += Input_lastname.cpp Input_nickname.cpp Input_phonenbr.cpp Input_secret.cpp
OBJ_DIR = build/

###############################################################################
## RULES

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating FILE .......\n"
	@$(CC) $(CFLAGS) $(OBJS) -o $@ > /dev/null

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE) > /dev/null

clean: 
	@echo "CLEAN all .o files .......\n"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "FCLEAN all .o et .a files .......\n"
	@rm -f $(NAME) > /dev/null

re: fclean all
	@echo "All erased and re-compiled .......\n"		

.PHONY: all clean fclean re