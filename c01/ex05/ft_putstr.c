/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:00:01 by tlai-an           #+#    #+#             */
/*   Updated: 2022/05/26 10:11:56 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n++], 1);
	}
}