# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 07:06:57 by eaqrabaw          #+#    #+#              #
#    Updated: 2025/09/01 20:00:49 by eaqrabaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = megaphone
OBJ_File = obj
SOURCE = $(addsuffix .cpp, $(SRC))
OBJ = $(addprefix $(OBJ_File)/, $(addsuffix .o, $(SRC)))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) -o $@ $(OBJ)

$(OBJ_File)/%.o : %.cpp | $(OBJ_File)
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(OBJ_File) :
	@mkdir -p $@

clean :
	@rm -rf $(OBJ_File)
	
fclean : clean
	@rm -rf $(NAME)
	
re : fclean all

.PHONY : all clean fclean re