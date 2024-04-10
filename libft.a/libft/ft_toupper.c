/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:43:10 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/09 17:31:31 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int toupper(int c)
{
        if(c >= 'a' && c <= 'z')
        {
               
                return (c -32);
        }
        return c;
}
/*
int main(void)
{
        int test = 'a';

        printf("%c",toupper(test));
}
*/