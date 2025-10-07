# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 08:25:09 by eaqrabaw          #+#    #+#              #
#    Updated: 2025/05/22 08:37:44 by eaqrabaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFiles = 
OBJ_DIR = obj
SOURCE = $(addsuffix .cpp, $(CPPFiles))
OBJECTS = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(CPPFiles)))
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m
ARROW = ➤

all : $(NAME)

$(NAME) : $(OBJECTS)
	@echo "$(GREEN)$(ARROW)  Creating The Executable File...$(RESET)"
	@$(CC) $(OBJECTS) -o $(NAME)
	@echo "$(GREEN)Done...$(RESET) "

$(OBJ_DIR)/%.o : %.cpp | $(OBJ_DIR) 
	@echo "$(GREEN)$(ARROW)  Creating The OBJ Files...$(RESET)"
	@$(CC) $(CPPFLAGS) -c $< -o $@  
	@echo "$(GREEN)Done..$(RESET)"

$(OBJ_DIR) :
	@echo "$(GREEN)$(ARROW)  Creating the OBJ Directory $(RESET)"
	@mkdir -p $(OBJ_DIR)
	@echo "$(GREEN)Done..$(RESET)"

clean :
	@echo "$(RED)$(ARROW)  Cleaning the object files $(RESET)"
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)Done...$(RESET)"
	
fclean : clean
	@echo "$(RED)$(ARROW)  Cleaning the executable $(RESET)"
	@rm -f $(NAME)
	@echo "$(RED)Done...$(RESET)"

re : fclean all

.PHONY : all clean fclean re