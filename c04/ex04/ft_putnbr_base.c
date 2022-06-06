/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 11:20:05 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/05 14:35:16 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		checkbase(char *base);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	basesize;
	int	arr[100];
	int	i;

	i = 0;
	basesize = 0;
	if (checkbase(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[basesize])
			basesize++;
		while (nbr)
		{
			arr[i] = nbr % basesize;
			nbr = nbr / basesize;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[arr[i]]);
	}
}

int	checkbase(char *base)
{
	int	n;
	int	m;

	n = 0;
	m = 0;
	if (base[n] != '\0' || base[n + 1] != '\0')
	{
		while (base[n] != '+' || base[n] != '-')
		{
			while (base[m] != '\0')
			{
				while (base[n] != '\0')
				{
					++n;
					if (base[n] == base[m])
						return (0);
				}
				++m;
				if (base[m] == '\0')
					return (1);
			}
		}
	}
	return (0);
}
