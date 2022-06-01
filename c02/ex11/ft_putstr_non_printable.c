/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:19:37 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/01 11:17:28 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr_non_printable(char *str);
void    ft_putchar(char c);



void    ft_putstr_non_printable(char *str)
{
    int n;
    char *base16;

    base16 = "0123456789abcdef";

    n = 0;
    while (str[n] != '\0')
    {
        if(str[n] < ' ' || str[n] > '~')
        {
            ft_putchar('\\');
            ft_putchar(base16[(str[n]) / 16]);
            ft_putchar(base16[(str[n]) % 16]);
            ++n;
        }
        ft_putchar(str[n++]);
    }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}