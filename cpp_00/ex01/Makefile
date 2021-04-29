SRCS =			./main.cpp \
				./Contact.cpp \
				./ft_add.cpp \
				./ft_search.cpp \
				./utils.cpp

OBJS =			$(SRCS:.cpp=.o)

CLANG = 		clang++

FLAGS =			-Wall -Wextra -Werror

NAME =			phone_book

%.o:			%.cpp
				@ $(CLANG) -c $(FLAGS) $< -o $(<:.cpp=.o)

all: 			$(NAME)

$(NAME):		$(OBJS)
				@ $(CLANG) -o $(NAME) $(OBJS)
				@ echo "phone_book built, run command './phone_book'"

clean:
				@ rm -f $(OBJS)

fclean:			clean
				@ rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re