/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:08:15 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/05 14:49:23 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int n;
    int m;
    int o;
    int p;

    n = -1;
    m = 0;
    o = -1;
    p = -1;
    while (src[++p] != '\0'){}
    while (dest[++o] != '\0'){}
    while (dest[++n] != '\0')
        size--;
    while (size != 0)
    {
        while (src[m] != '\0')
        {
            if (dest[n] == '\0')
            {
                dest[n++] = src[m++];
                size--;
                if (size == 0)
                    break;
            }
        }
        dest[n - 1] = '\0';
    }
    return (o + p);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    char arr1[] = "kekw";
    char arr2[] = "kekw";
    char arr3[] = "kekw";

    a = ft_strlcat(arr1, arr2, 2);
    b = strlcat(arr3, arr2, 2);
    printf("my func: %s\n", arr1);
    printf("sys func: %s\n", arr3);
    printf("my func: %d\n", a);
    printf("my func: %d\n", a);
    return (0);
}


