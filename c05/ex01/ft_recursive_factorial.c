/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:04:22 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/08 10:52:46 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}


int main()
{
	printf("factorial result: %d\n", ft_recursive_factorial(0));
	return 0;
}
