/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:05:14 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/07 09:05:14 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb);

int ft_sqrt(int nb)
{
	int n;

	n = 0;
	while (n <= 46340)
	{
		if ((n * n) == nb)
			return (n);
		++n;
	}
	return 0;
}

int main()
{
	int a;
	int b;
	a = 10;
	b = ft_sqrt(a);
	printf("square root of %d is %f", a, b);
}