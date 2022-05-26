/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:17:37 by tlai-an           #+#    #+#             */
/*   Updated: 2022/05/24 15:29:14 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_print_numbers(char num1, char num2, char num3);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(char num1, char num2, char num3)
{
	ft_putchar(num1);
	ft_putchar(num2);
	ft_putchar(num3);
	ft_putchar(',');
	ft_putchar(' ');
	if (num1 == '7' && num2 == '8' && num3 == '9')
	{
		ft_putchar(num1);
		ft_putchar(num2);
		ft_putchar(num3);
		ft_putchar('\n');
	}
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	num2 = '1';
	num3 = '2';
	while (num1 <= '7')
	{
		ft_print_numbers(num1, num2, num3);
		++num3;
		if (num3 == ':')
		{
			num2++;
			if (num2 == '9')
			{
				num1++;
				num2 = num1 + 1;
			}
			num3 = num2 + 1;
		}
	}
}
