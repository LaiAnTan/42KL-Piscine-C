/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalizetest.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:19:18 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/01 11:14:07 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcaptialize(char *str);
char *lowcase(char *str);
void capital(char *str);
int checkletter(char *str);
int checknumber(char *str);

char *ft_strcapitalize(char *str)
{
    int count;

    count = -1;
    lowcase(str);
    while (str[++count] != '\0')
    {
        if (!(checkletter(&str[count - 1])) && (!checknumber(&str[count - 1])))
            capital(&str[count]);
    }
    return (str);
}

char *lowcase(char *str)
{
    int n;

    n = -1;
    while (str[++n] != '\0')
    {
        if(str[n] >= 'A' && str[n] <= 'Z')
            str[n] += 32;
    }
    return (str);
}

void capital(char *str)
{
   if(*str >= 'a' && *str <= 'z')
        *str -= 32;
}

int checkletter(char *str)
{
    if (*str < 'A' || *str > 'Z' && *str < 'a' || *str > 'z')
        return (0);
    else
        return (1);
    
}

int checknumber(char *str)
{
    if (*str < '0' || *str > '9')
        return (0);
    else
        return (1);
}

int main()
{
    char *e;
    char arr[] = "TEST 123TEST";
    e = ft_strcapitalize(arr);
    printf("%s\n", e);
    return (0);
}
