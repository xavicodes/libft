/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:05:46 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/22 14:12:48 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(int n)
{
	int	i;

	i = 0;
	while (n /= 10)
	{
		i++;
	}
	return (i);
}
char	*ft_itoa(int n)
{
	char *strnum;
	long numb;
	size_t digits;

	digits = get_digits(n);
        numb = 0;

	if (n < 0)
	{
		n *= -1;
		digits++;
	}
	if (!(strnum = malloc(sizeof(char) * (digits + 1))))
	{
		return (NULL);
	}
	*(strnum + digits) = 0;
	//        strnumb[digit+1] = 0;

	while (digits--)
	{
		*(strnum + digits) = numb % 10 + '0';
		numb /= 10;
	}
	if (n < 0)
	{
		strnum[0] = '-';
	}
	return (strnum);
}