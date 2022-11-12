SRCS		=	ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp\
				main.cpp\

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	diamond

CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra  -Wshadow -Wno-shadow

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