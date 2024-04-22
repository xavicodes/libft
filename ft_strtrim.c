/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:37:40 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/22 13:45:12 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char *trimmed;
	start = 0;
	end = ft_strlen(s1);

	if (!s1 || !set)
		return (NULL);

	while (ft_strchr(&s1[start], (long)set) && start <= end)
	{
		start++;
	}
	while (ft_strchr(&s1[end], (long)set) && start <= end)
	{
		end--;
	}

	trimmed = malloc((end - start) * (sizeof(char)));
	//        trimmed = malloc((end-start)  * (sizeof(char)));
	if (!trimmed)
		return (NULL);

	ft_strlcpy(trimmed, &s1[start], end - start);
	//        ft_strlcpy(s1[start], end - start + 2);

	return (trimmed);
}