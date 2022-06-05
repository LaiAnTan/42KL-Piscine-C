/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 11:08:05 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/05 11:42:11 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_atoi_base(char *str, char *base);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);
int		checkbase(char *base);
void	ft_putchar(char c);

void	ft_atoi_base(char *str, char *base)
{
	ft_putnbr_base(ft_atoi(str), base);
}

int	ft_atoi(char *str)
{
	int	n;
	int	sign;
	int	rtval;

	n = 0;
	sign = -1;
	rtval = 0;
	while (str[n] == ' ' || (str[n] >= 9 && str[n] <= 13))
		++n;
	while (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			sign *= -1;
		++n;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		rtval = (rtval * 10) + (str[n] - '0');
		++n;
	}
	return (rtval * sign);
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
