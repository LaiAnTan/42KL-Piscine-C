/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:05:31 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/07 09:05:31 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while(++n <= (nb / 2))
	{
		if(((nb % n) == 0))
		{
			return (0);
			break;
		}
	}
	return (1);
}

int	main()
{
	int a;
	
	a = ft_is_prime(11);
	printf("%d\n", a);
	return (0);
}