/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:15:42 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/09 17:31:29 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *strrchr(const char *str, int c)
{
        int i;

        i = 0;
        while(str[i])
                i++;
        while(str[--i] > 0)
        {
                if(str[i] == c)
                        return ((char *)&str[i]);
        }
                return 0;
}
/*
int main(void)
{
        int c = 'x';
        char str[30] ="hello mx frined x prank";
        printf("%s",strrchr(str,c));

        return 0;
}
*/