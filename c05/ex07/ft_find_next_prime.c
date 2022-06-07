/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:05:44 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/07 10:10:17 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb);
int	isprime(int test);

int	ft_find_next_prime(int nb)
{
	int	nextprime;
	int	_bool;

	nextprime = nb;
	_bool = 0;
	if (nb <= 1)
		return (2);
	while (_bool == 0)
	{
		++nextprime;
		if (isprime(nextprime))
			_bool = 1;
	}
	return (nextprime);
}

int	isprime(int test)
{
	int	n;

	n = 2;
	if (test == 0 || test == 1)
		return (0);
	while (++n <= (test / 2))
	{
		if (((test % n) == 0))
		{
			return (0);
			break ;
		}
	}
	return (1);
}
