/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:44:28 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/10 14:14:04 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int memcmp(const void *str1, const void *str2, size_t n)
{
        size_t i;

        i = 0;
        while(((char *)str1)[i] == ((char *)str2)[i] && i < n)
                i++;
        if(((char *)str1)[i] != ((char *)str2)[i])
        {
                return (((char *)str1)[i] - ((char *)str2)[i]);
        }
        return (0);
        
}
/*
int main(void)
{
        char str1[30] = "ABCDEf";
        char str2[30] = "ABCDEF";
        char str3[30] = "Abcdef";
        char str4[30] = "aBCDEf";

        printf("%i\n",memcmp(str1,str2,4));
        printf("%i\n",memcmp(str3,str4,5));
        printf("%i\n",memcmp(str1,str3,5));
        printf("%i\n",memcmp(str2,str4,5));
}
*/