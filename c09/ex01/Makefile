SRC_PATH = ./srcs/

HEADER_PATH = ./includes/

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCS = ${addprefix ${SRC_PATH}, ${SRC}}

SRCS_O := ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

LIB = libft.a

all : ${LIB}

.c.o :
	gcc ${CFLAGS} -c -I${HEADER_PATH} $< -o ${<:.c=.o} 

libft.a : ${SRCS_O}
	ar rcs ${LIB} ${SRCS_O}

clean :
	rm -f ${SRCS_O}

fclean : clean
	rm -f ${LIB}

re : fclean all