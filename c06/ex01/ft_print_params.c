/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:58:58 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/05 17:02:38 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n;
	int	m;

	n = 1;
	m = 0;
	while (n <= argc)
	{
		if (n == argc)
			break ;
		while (argv[n][m] != '\0')
			++m;
		write(1, argv[n], m);
		write(1, "\n", 1);
		++n;
	}
	return (0);
}
