SRCS =			./megaphone.cpp

OBJS =			$(SRCS:.cpp=.o)

CLANG = 		clang++

FLAGS =			-Wall -Wextra -Werror

NAME =			megaphone

%.o:			%.cpp
				@ $(CLANG) -c $(FLAGS) $< -o $(<:.cpp=.o)

all: 			$(NAME)

$(NAME):		$(OBJS)
				@ $(CLANG) -o $(NAME) $(OBJS)
				@ echo "megaphone built, run command './megaphone' or './megaphone SOME_ARGS'"

clean:
				@ rm -f $(OBJS)

fclean:			clean
				@ rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re