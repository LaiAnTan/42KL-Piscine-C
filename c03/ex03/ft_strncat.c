/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:07:02 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/02 15:49:10 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb);

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	count1;
	int	count2;

	count1 = -1;
	count2 = 0;
	while (count2 != nb)
	{
		while (dest[count1] != '\0')
			++count1;
		while (src[count2] != '\0')
		{
			if (dest[count1] == '\0')
			{
				if (count2 == nb)
					break ;
				dest[count1] = src[count2];
				count1++;
				count2++;
			}
		}
	}
	dest[count1] = '\0';
	return (dest);
}
