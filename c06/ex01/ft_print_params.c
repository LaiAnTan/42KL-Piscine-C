/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:02:29 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/07 09:02:29 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (++count < argc)
	{
		while (argv[count][++i] != '\0')
		{
			write (1, &argv[count][i], 1);
		}
		write (1, "\n", 1);
		i = -1;
	}
}
