# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/29 16:36:29 by clouden           #+#    #+#              #
#    Updated: 2026/04/29 17:31:50 by clouden          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I includes

NAME		=	phonebook
SRCS		=	srcs/main.cpp \
				srcs/contact.cpp \
				srcs/phonebook.cpp

OBJS		=	$(patsubst srcs/%.cpp, obj/%.o, $(SRCS))
HEADER		=	includes/phonebook.hpp \
				includes/contact.hpp

all: $(NAME)

debug:
	@echo "SRCS = $(SRCS)"
	@echo "OBJS = $(OBJS)"

$(NAME): $(OBJS) 
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) Created!"

obj:
	@mkdir -p obj

obj/%.o: srcs/%.cpp $(HEADER) | obj
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf obj
	@echo "$(NAME) obj files deleted!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) all files deleted!"

re: fclean all
	
.PHONY: all clean fclean re
