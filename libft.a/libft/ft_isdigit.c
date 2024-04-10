/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:09:21 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/09 17:31:44 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int isdigit(int c)
{
        if (c >= 0 && c <= 9)
        {
                return 1;
        }
        else
                return 0;
}

/*
int main(void)
{
        int test = 6;
        printf("%i",isdigit(test));
}
*/