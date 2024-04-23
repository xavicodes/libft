/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:09:26 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/22 19:50:39 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);	
	}
	else
		return (0);
}

// int	main(void)
// {
// 	int	test;

// 		test = '~' + 1;
// 	//	printf("%i",ft_isprint(test));
		
// 		//printf("%c",test);
// }
