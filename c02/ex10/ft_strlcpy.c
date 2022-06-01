/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:19:28 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/01 11:16:19 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int n);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    n = (n - 1);
    i = 0;
    if (n < 0)
    {
        return i;
    }
    if (n > 0)
    {
        while (src[i] != '\0' && n != 0)
        {
            dest[i]=src[i];
            n--;
            i++;
        }
    }
    dest[i] = '\0';
    return i;
}