/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:04:05 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/07 09:04:05 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int n;
	int val;

	n = 0;
	val = 1;
	while (++n <= nb)
		val *= n;
	return (val);

}

int main()
{
	printf("factorial result: %d\n", ft_iterative_factorial(10));
	return 0;
}