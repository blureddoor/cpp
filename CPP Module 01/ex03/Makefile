
#NAME		=	attack

#SRC			=	main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp \

#OBJS		=	$(SRC:.cpp=.o)

#COMPILE		=	c++

# -std=c++98 displays an error if an unauthorized function is left in the code
#FLAGS		=	-Wall -Wextra -Werror -std=c++98

#EXE_NAME	=	-o $(NAME)

#EXEC		=	$(NAME)

# ------------------------------------- RULES ---------------------------------
#all: $(NAME)

#$(NAME): $(OBJS)
#	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

#clean:
#	rm -rf $(OBJS)

#fclean: clean
#	rm -rf $(EXEC)
	
#re:	fclean all

#.cpp.o:
#	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

#.PHONY:	all clean fclean re

SRCS		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp\

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	attack

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