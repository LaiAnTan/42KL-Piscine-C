# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 16:40:48 by tlai-an           #+#    #+#              #
#    Updated: 2022/06/09 16:40:51 by tlai-an          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

SOURCEDIR = ./srcs/

HEADERDIR = ./includes/

SOURCEPATH = ${addprefix ${SOURCE}, ${SOURCE}}

SRCS_O := ${SOURCE:.c=.o}

all : libft.a

.c.o : 
	gcc -Wall -Wextra -Werror -c -I ${HEADERDIR} -o $< ${<:.c=.o}

libft.a :
	ar rcs libft.a ${SRCS_O}

clean : 
	rm -f ${SRCS_O}

fclean : clean
	rm -f libft.a

re : fclean all 