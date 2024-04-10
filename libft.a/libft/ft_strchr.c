/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:58:09 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/09 17:31:34 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char *strchr(const char *str, int c)
{
        int i = 0;
        while(str[i] != c)
        {
                i++;
        }
        if(str[i] == c)
        {
                return((char *)str + i);
        }
        else   
                return 0;
}

/*
int main(void)
{
        int c = 'a';
        const char str[20] = "Hello ma friend";
        printf("%s",(char *) strchr(str,c));
}
*/
