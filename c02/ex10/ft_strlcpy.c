/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:19:28 by tlai-an           #+#    #+#             */
/*   Updated: 2022/05/31 17:19:32 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int n);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int n)
{
    int i;

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

int main()
{
    char str1[10] = "poggers";
    char str2[10];
    int e;
    e = ft_strlcpy(str2, str1, 6);
    ft_strlcpy(str2, str1, 6);
    printf("%s\n", str2);
    printf("%d\n", e);
    
    return 0;
}