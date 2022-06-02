/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:07:07 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/02 16:26:22 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strstr(char *str, char *to_find);
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char    *ft_strstr(char *str, char *to_find)
{
    int n;
    int m;
    int same;
    int first;

    n = -1;
    m = 0;
    same = 0;
   	first = 0;
    while(str[++n] != '\0' && to_find[m] != '\0')
    {
        if (str[n] == to_find[m])
        {
            if (m == 0)
                first = n;
            same++;
            if (same == ft_strlen(to_find))
                break;
            m++;
        }else
        {
            same = 0;
            first = 0;
            m = 0;
        } 
    }
    if (same == ft_strlen(to_find))
        return(&str[first]);
    return(0);
}

