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

all : libft.a

libft.a :
	gcc -Wall -Wextra -Werror -c -I ./includes/*.h -O ./srcs/*.c
	mv *.o ./srcs/
	ar rcs libft.a ./srcs/*.o

clean : 
	rm ./srcs/*.o

fclean : clean
	rm libft.a

re : fclean all

.PHONY : all clean fclean re 