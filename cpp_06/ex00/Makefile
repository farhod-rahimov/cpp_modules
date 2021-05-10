SRCS =			./Functions.cpp \
				./main.cpp \
				./workWithChar.cpp \
				./workWithDigit.cpp \
				./workWithException.cpp \

OBJS =			$(SRCS:.cpp=.o)

CLANG = 		clang++

FLAGS =			-Wall -Wextra -Werror

NAME =			convert

%.o:			%.cpp
				@ $(CLANG) -c $(FLAGS) $< -o $(<:.cpp=.o)

all: 			$(NAME)

$(NAME):		$(OBJS)
				@ $(CLANG) -o $(NAME) $(OBJS)
				@ echo "convert built, run command './convert' or './convert SOME_ARG'"

clean:
				@ rm -f $(OBJS)

fclean:			clean
				@ rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re