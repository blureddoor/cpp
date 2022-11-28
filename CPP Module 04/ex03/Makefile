SRCS		=	AMateria.cpp Character.cpp MateriaSource.cpp \
				main.cpp\

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	ice

CXX			=	clang++

CXXFLAGS	=	-W -Wall -Werror

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