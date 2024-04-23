/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:07:15 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/22 20:25:47 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        int i;
        char *str;

        i = 0;
        if(!s)
                return (NULL);
        str = (char *)malloc(sizeof(char) * (ft_strlen(s)+1));

        if(str == NULL)
                return(NULL);
        
        while(s[i] != '\0')
        {
                str[i] = f(i,s[i]);
                i++;
        }
        str[i] = '\0';
        return (str);
}
/*
int main(void)
{
        char s[] = "Hello world!";

}*/