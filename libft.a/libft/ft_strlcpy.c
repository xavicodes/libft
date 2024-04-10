/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:16:16 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/10 15:11:10 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
        size_t i;

        i = 0;
        while(i < dstsize && src[i] != '\0')
        {
                dst[i] = src[i];
                i++;
        }
        while (i < dstsize)
	{
		dst[i] = '\0';
		i++;
	}
        
        return (i);
}
/*
int main(void)
{
        size_t a;

        a = 4;
        char dst[] = "hello";
        char src[] = "wawa";

        printf("%zu\n",ft_strlcpy(dst,src,a));
        printf("%s",dst);

}
*/