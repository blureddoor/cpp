# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/24 09:18:20 by lvintila          #+#    #+#              #
#    Updated: 2022/12/24 11:15:48 by lvintila         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	Convert.cpp\
				main.cpp\

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	convert

CXX			=	clang++

CXXFLAGS	=	-Wall -Werror -Wextra

RM			=	rm -f

all			=	$(NAME)

$(NAME):		$(OBJS)
					$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)


fclean:			clean
						$(RM) $(NAME)


re:				fclean $(NAME)

.PHONY:			all clean fclean re