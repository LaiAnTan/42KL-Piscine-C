/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:18:42 by tlai-an           #+#    #+#             */
/*   Updated: 2022/05/31 17:44:32 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (n != x)
	{
		dest[x] = src[x];
		x++;
		if (n == x)
		{
			break ;
		}
	}
	while (n > x)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
