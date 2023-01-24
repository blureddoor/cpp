SRCS		=	microshell.cpp

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	microshell

CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -I.

STDFLAG		=	-std=c++98

RM			=	rm -f

all			=	$(NAME)

$(NAME):		$(OBJS)
					$(CXX) $(CXXFLAGS) $(STDFLAG) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)


fclean:			clean
						$(RM) $(NAME)


re:				fclean $(NAME)

.PHONY:			all clean fclean r