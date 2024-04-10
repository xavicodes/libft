/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:41:20 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/09 17:38:36 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
 void	*ft_memset(void *str, int c, size_t len)
{
        size_t i;
        i = 0;
        while(i < len)
        {
        ((unsigned char *)str)[i] = (unsigned char)c;
                i++;       
        }
        return str;
}
/*
int main(void)
{
       const char str[100] ="hello world";
        
    printf("%s",(char *)ft_memset((void *)str,'a', 10));
       return 0; 
}
 */