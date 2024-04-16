/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:15:42 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/11 12:58:20 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	if(*str == '\0')
		return (0);
	while (str[i])
		i++;
	while (str[--i] > 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
	}
	return (0);
}
/*
int	main(void)
{
	int	c;

		c = 'x';
		char str[30] ="hello mx frined x prank";
		printf("%s",strrchr(str,c));
		return (0);
}
*/