# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaqrabaw <eaqrabaw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 08:21:04 by eaqrabaw          #+#    #+#              #
#    Updated: 2025/10/07 20:42:06 by eaqrabaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CXX = c++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_FILE = obj
PhoneBook = PhoneBook/PhoneBook.cpp 
Contact = Contact/Contact.cpp
SRCS = 	main.cpp \
		$(PhoneBook) \
		 $(Contact)
OBJS = $(SRCS:%.cpp=$(OBJ_FILE)/%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) -o $@ $(OBJS)

$(OBJ_FILE)/%.o : %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -c $< -o $@
	
clean :
	$(RM) $(OBJ_FILE)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
