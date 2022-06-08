/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:04:05 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/07 15:30:06 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	val;

	n = 0;
	val = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (++n <= nb)
		val *= n;
	return (val);
}
