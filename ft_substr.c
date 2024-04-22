/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substrWW.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:41:47 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/22 13:45:51 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t a;
	char *newstr;

	i = start;
	a = 0;
	while (!s || !(newstr = (malloc(sizeof(char) * (len + 1)))))
	{
		return (NULL);
	}
	while (i < ft_strlen(s) && a < len)
	{
		newstr[a] = s[i];
		i++;
		a++;
	}
	newstr[a + 1] = '\0';
	return (newstr);
}