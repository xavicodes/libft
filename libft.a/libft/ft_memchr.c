/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:43:27 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/10 13:40:30 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void *memchr(const void *str, int c, size_t n)
{
        int i;

        i = 0;
     while(((char *)str)[i] != c && i < n)
     {
        i++;
     }
     if(((char *)str)[i] == c && i < n)
     {
        return ((char *)str + i);
     }
     return 0;   
}
/*
int main(void)
{
char s[30] = "hello ma friend";


printf("%s",(char *)memchr(s,'a',8));
}
*/