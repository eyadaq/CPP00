# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 07:06:57 by eaqrabaw          #+#    #+#              #
#    Updated: 2025/05/22 07:43:50 by eaqrabaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFiles = megaphone
OBJ_DIR = Obj
SOURCE = $(addsuffix .cpp, $(CPPFiles))
OBJECTS = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(CPPFiles)))
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m
ARROW = ➤

all : $(NAME)

$(NAME) : $(OBJECTS)
	@echo "$(GREEN)Creating The Executable File...$(RESET)"
	@$(CC) $(OBJECTS) -o $(NAME) $(LDFLAGS)
	@echo "$(GREEN)Done...$(ARROW)$(RESET) "

$(OBJ_DIR)/%.o : %.cpp | $(OBJ_DIR) 
	@echo "$(GREEN)Creating The OBJ Files...$(RESET)"
	@$(CC) $(CPPFLAGS) -c $< -o $@  
	@echo "$(GREEN)Done..$(ARROW)$(RESET)"

$(OBJ_DIR) :
	@echo "$(GREEN)Making the OBJ Directory $(RESET)"
	@mkdir -p $(OBJ_DIR)
	@echo "$(GREEN)Done..$(ARROW) $(RESET)"

clean :
	@echo "$(RED)Cleaning the object files $(RESET)"
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)Done...$(ARROW) $(RESET)"
	
fclean : clean
	@echo "$(RED)Cleaning the executable $(RESET)"
	@rm -f $(NAME)
	@echo "$(RED)Done...$(ARROW) $(RESET)"

re : fclean all

.PHONY : all clean fclean re
