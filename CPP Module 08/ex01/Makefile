SRCS		=	main.cpp\

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	span

CXX			=	c++

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