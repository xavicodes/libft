/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:09:26 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/22 14:23:53 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 0 && c <= 32)
	{
		return (0);
	}
	else
		return (1);
}
/*
int	main(void)
{
	int	test;

		test = 50;
		printf("%i",isprintf(test));
}
*/