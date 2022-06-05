/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 11:06:04 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/05 11:06:10 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	n;
	int	sign;
	int	rtval;

	n = 0;
	sign = 1;
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
