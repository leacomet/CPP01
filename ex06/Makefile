# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acomet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 16:30:18 by acomet            #+#    #+#              #
#    Updated: 2024/01/28 18:50:19 by acomet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harlFilter

CXX			=	c++

CXXFLAGS		=	-Wall -Wextra -Werror  -std=c++98

BUILD		=	build

SRCS		= 	main.cpp \
				Harl.cpp \

OBJS 		= 	$(SRCS:%.cpp=$(BUILD)/%.o)

all: $(NAME)
.PHONY: all

$(BUILD)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(BUILD) $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(BUILD):
	mkdir -p $(BUILD)

clean:
	rm -rf $(BUILD)
.PHONY: clean

fclean: clean
	rm -f $(NAME)
.PHONY: fclean

re: fclean all
.PHONY: re
