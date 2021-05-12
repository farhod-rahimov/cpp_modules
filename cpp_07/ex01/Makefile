SRCS =			./main.cpp

OBJS =			$(SRCS:.cpp=.o)

CLANG = 		clang++

FLAGS =			-Wall -Wextra -Werror

NAME =			iter

%.o:			%.cpp
				@ $(CLANG) -c $(FLAGS) $< -o $(<:.cpp=.o)

all: 			$(NAME)

$(NAME):		$(OBJS)
				@ $(CLANG) -o $(NAME) $(OBJS)
				@ echo "iter built, run command './iter'"

clean:
				@ rm -f $(OBJS)

fclean:			clean
				@ rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re