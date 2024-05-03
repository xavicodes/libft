/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:17:29 by xlourenc          #+#    #+#             */
/*   Updated: 2024/05/02 16:54:03 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "libft.h"

	int	count_tokens(char const *str, char del)
	{
		int	i;
		int	tokens;

		i = 0;
		tokens = 0;
		while (str[i])
		{
			while (str[i] == del)
				i++;
			if (str[i] != del && (i == 0 || str[i - 1] == del))
			{
				tokens++;
			}
			if (str[i])
				i++;
		}
		//printf("tokens: %d\n", tokens);
		return (tokens);
	}

	int	safe_malloc(char **v_token, int p, size_t len)
	{
		int	i;

		i = 0;
		v_token = malloc(sizeof(char *) * (p + 1));
		if (v_token == NULL)
			return (1);
		while (i < p)
		{
			(v_token)[i] = malloc(len+1);
			if ((v_token)[i] == NULL)
			{
				while (i-- > 0)
					free((v_token)[i - 1]);
				free(v_token);
				return (1);
			}
			i++;
		}
		(v_token)[p] = NULL;
		return (0);
	}

	int	ft_fill(char **v_tokens, const char *s, char del)
	{
		int	i;
		int	v;
		int	len;

		i = 0;
		v = 0;
		while (s[i])
		{
			len = 0;
			while (s[i] == del && s[i] != '\0')
				i++;
			while (s[i] != del && s[i] != '\0')
			{
				i++;
				len++;
			}
			if (len > 0)
			{
				v_tokens[v] = malloc(len + 1);
				if (v_tokens[v] == NULL)
					return (1);
				ft_strlcpy(v_tokens[v], s + i - len, len + 1);
				v_tokens[v][len] = '\0';
				v++;
			}
		}
		return (0);
	}

	char	**ft_split(char const *s, char c)
	{
		int		tokens;
		char	**v_tokens;

		if (s == NULL )
			return (NULL);
		tokens = count_tokens(s, c);
		if (tokens <= 0)
			return (NULL);
		// if (safe_malloc(v_tokens, tokens, ft_strlen(s) + 1))
		// 	return (NULL);
		v_tokens = malloc(sizeof(char *) * tokens + 1);
		if (!v_tokens)
			return NULL;
		if (ft_fill(v_tokens, s, c))
			return (NULL);
		v_tokens[tokens] = NULL;
		return (v_tokens);
	}

/* int	main(void)
{
	char **split = ft_split("hello world 42", ' ');
	int i = 0;
	while(split[i])
	{
		printf("str: %s\n", split[i]);
		free(split[i]);
		i++;
	}
}  */