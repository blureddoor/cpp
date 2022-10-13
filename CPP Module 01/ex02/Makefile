SRCS		=	main.cpp\

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	brain

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
	./$(EXEC) test.txt 9 nine

test2: all
	./$(EXEC) empty_file "a" "b"

test3: all
	./$(EXEC) non_existing_file a b

test4: all
	./$(EXEC) test.txt "" ""