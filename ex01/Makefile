# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 08:21:04 by eaqrabaw          #+#    #+#              #
#    Updated: 2025/09/11 10:17:32 by eaqrabaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CXX = c++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_FILE = obj
SRCS = main.cpp PhoneBook/PhoneBook.cpp Contact/Contact.cpp
OBJS = $(addprefix $(OBJ_FILE)/, $(SRCS:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) -o $@ $(OBJS)

$(OBJ_FILE)/%.o : %.cpp | $(OBJ_FILE)
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(OBJ_FILE) :
	@mkdir -p $(OBJ_FILE)

clean :
	$(RM) $(OBJ_FILE)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
