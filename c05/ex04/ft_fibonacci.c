/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:05:03 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/07 09:05:03 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int ft_fibonacci(int index)
{
	if(index < 0)
		return (-1);
	if(index == 0)
		return (0);
	if(index == 1 || index == 2)
		return (1);
	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
	int n;

	n = -1;
	while (++n < 25)
		printf("%d, ", ft_fibonacci(n));
	printf("%d", ft_fibonacci(n));
	return (0);
}