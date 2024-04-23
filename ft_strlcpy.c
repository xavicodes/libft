/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:16:16 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/23 15:17:48 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize-1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
		dst[i] = '\0';
	return (i);
}
/*
int	main(void)
{
		size_t a;
		char dst[] = "hello";
		char src[] = "wawa";

		a = 4;
		printf("%zu\n",ft_strlcpy(dst,src,a));
		printf("%s",dst);
}
*/