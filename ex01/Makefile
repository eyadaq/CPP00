# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 08:21:04 by eaqrabaw          #+#    #+#              #
#    Updated: 2025/08/31 11:08:18 by eaqrabaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_FILE = obj
SRCS = 
OBJS =  $(addprefix $(OBJ_FILE)/, $(addsuffix .o, $(SRCS)))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CPPFLAGS) -o $@ $(OBJS)

$(OBJ_FILE)/%.o : %.cpp | $(OBJ_FILE)
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(OBJ_FILE) :
	@mkdir -p $(OBJ_FILE)
	
clean :
	rm -rf $(OBJ_FILE)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all fclean clean re