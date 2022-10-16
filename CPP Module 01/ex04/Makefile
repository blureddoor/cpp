SRCS		=	main.cpp\

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	replace

CXX			=	clang++

CXXFLAGS	=	-Wall -Werror -Wextra -I.

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

test1: all
	./$(NAME) test one 1

test2: all
	./$(NAME) empty_file a b

test3: all
	./$(NAME) non_existing_file a b

test4: all
	./$(NAME) test "" ""