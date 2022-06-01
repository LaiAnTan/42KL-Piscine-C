/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:19:28 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/01 15:13:44 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	src_len;

	index = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (index < size - 1 && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (src_len);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
