/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:06:11 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/02 17:27:15 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int n);

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	x;
	int	val;

	x = 0;
	while (x != n)
	{
		while (s1[x] != '\0' || s2[x] != '\0')
		{
			if (s1[x] != s2[x])
			{
				if (s1[x] > s2[x])
				{
					val = (s1[x] - s2[x]);
				}
				else if (s1[x] < s2[x])
				{
					val = (-(s2[x] - s1[x]));
				}
				break ;
			}
			break ;
		}
		x++;
	}
	return (val);
}
