SRCS		=	Zombie.cpp main.cpp ZombieHorde.cpp\

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	zombie

CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -I.

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