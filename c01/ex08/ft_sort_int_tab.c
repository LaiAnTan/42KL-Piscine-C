/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:01:04 by tlai-an           #+#    #+#             */
/*   Updated: 2022/05/26 14:29:11 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);
void	ft_compare(int comp, int maxcomp, int size, int *tab);

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_compare(int comp, int maxcomp, int size, int *tab)
{
	while ((comp + 1) != size)
	{
		if (tab[comp] > tab[comp + 1])
		{
			ft_swap(&tab[comp], &tab[(comp + 1)]);
			maxcomp = 0;
			comp = 0;
		}
		if (tab[comp] < tab[(comp + 1)] || tab[comp] == tab[(comp + 1)])
		{
			maxcomp++;
			comp++;
		}
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	maxcomp;
	int	comp;

	comp = 0;
	maxcomp = 0;
	while (maxcomp != size)
	{
		ft_compare(comp, maxcomp, size, tab);
		return ;
	}
	if (maxcomp == size)
	{
		return ;
	}
}
