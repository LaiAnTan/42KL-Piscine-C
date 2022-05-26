/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:00:39 by tlai-an           #+#    #+#             */
/*   Updated: 2022/05/26 10:16:39 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	revcount;
	int	swap;
	int	sizef;

	revcount = 0;
	sizef = 0;
	while (revcount++ != (size / 2))
	{
		swap = tab[sizef];
		tab[sizef++] = tab[size - 1];
		tab[size-- - 1] = swap;
		if (sizef == size)
		{
			break ;
		}
	}
	if (revcount == (size / 2))
	{
		return ;
	}
}
