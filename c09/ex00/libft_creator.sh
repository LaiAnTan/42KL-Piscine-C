# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 16:42:03 by tlai-an           #+#    #+#              #
#    Updated: 2022/06/09 16:42:24 by tlai-an          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
gcc -c -O *.c
ar rcs libft.a *.o
rm *.o