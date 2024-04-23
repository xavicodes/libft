/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:05:46 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/23 15:41:59 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
//_______________________ERROR WHEN THE NUMBER IS "-" THE FUNCTION GET_DIGIT COUNT THE - LIKE IT IS A NUMBER!_____________ 
// static size_t	get_digits(int n)
// {
// 	int	i;

// 	i = 0;
// 	while (n /= 10)
// 	{
// 		i++;
// 	}
// 	return (i);
// }
// char	*ft_itoa(int n)
// {
// 	char *strnum;
// 	long numb;
// 	size_t digits;

// 	digits = get_digits(n);
//         numb = 0;

// 	if (n < 0)
// 	{
// 		n *= -1;
// 		digits++;
// 	}
// 	if (!(strnum = malloc(sizeof(char) * (digits + 1))))
// 	{
// 		return (NULL);
// 	}
// 	*(strnum + digits) = 0;
// 	//        strnumb[digit+1] = 0;

// 	while (digits--)
// 	{
// 		*(strnum + digits) = numb % 10 + '0';
// 		numb /= 10;
// 	}
// 	if (n < 0)
// 	{
// 		strnum[0] = '-';
// 	}
// 	return (strnum);
// }



#include "libft.h"

static size_t get_digits(int n)
{
    size_t i = 1; // Start with 1 for the sign

    while (n /= 10)
    {
        i++;
    }
    return i;
}

char *ft_itoa(int n)
{
    char *strnum;
    long numb;
    size_t digits;
    int negative = 0;

    digits = get_digits(n);
    numb = (long)n; // Cast n to long

    if (numb < 0)
    {
        negative = 1;
        numb = -numb;
    }

    if (!(strnum = malloc(sizeof(char) * (digits + 1 + negative))))
    {
        return (NULL);
    }

    strnum[digits + negative] = '\0'; // Null-terminate the string at the end

    while (digits--)
    {
        strnum[digits + negative] = numb % 10 + '0';
        numb /= 10;
    }

    if (negative)
    {
        strnum[0] = '-';
    }

    return (strnum);
}