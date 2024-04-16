/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:52:18 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/11 12:58:16 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tolower(int c)
{
	while (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
int	main(void)
{
	int	test;

		test = 'A';
		printf("%c",tolower(test));
}
*/