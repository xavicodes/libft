/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:37:10 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/15 14:52:28 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	char	*str3;

	i = 0;
	a = 0;
	str3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!str3)
	{
		return (NULL);
	}
	while (s1[a])
	{
		str3[i] = s1[a];
		i++;
		a++;
	}
	a = 0;
	while (s2[a])
	{
		str3[i] = s2[a];
		i++;
		a++;
	}
	return (str3);
}
/*
int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = " world";

	printf("%s", ft_strjoin(s1, s2));
}
*/