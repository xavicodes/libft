/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:20:22 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/09 17:31:39 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t strlen(const char *str)
{
        int i = 0;
        while(str[i])
        {
                i++;
        }
        return i;
}
/*
int main(void)
{
        char *test = "hello";

        printf("%lu",strlen("hello"));
}
*/