/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:09:13 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/09 17:31:27 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

        int isascii(int c )
        {
                if ( c >= 0 && c <= 127)
                {
                        return 1;
                }
                else 
                        return 0;
        }
        /*
        int main(void)
        {
                int test = 128;

                printf("%i",isascii(test));
        }
        */