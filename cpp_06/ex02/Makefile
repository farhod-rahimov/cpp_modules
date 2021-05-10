SRCS =			./identify_from_pointer.cpp \
				./identify_from_reference.cpp \
				./Classes.cpp \
				./main.cpp

OBJS =			$(SRCS:.cpp=.o)

CLANG = 		clang++

FLAGS =			-Wall -Wextra -Werror

NAME =			identify

%.o:			%.cpp
				@ $(CLANG) -c $(FLAGS) $< -o $(<:.cpp=.o)

all: 			$(NAME)

$(NAME):		$(OBJS)
				@ $(CLANG) -o $(NAME) $(OBJS)
				@ echo "identify built, run command './identify'"

clean:
				@ rm -f $(OBJS)

fclean:			clean
				@ rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re