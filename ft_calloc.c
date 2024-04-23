/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:22:00 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/23 13:34:14 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
        void *ptr;
        ptr = (void *)malloc(sizeof(size) * (nitems));
        
        if(ptr == NULL)
                return (NULL);
                
        ft_bzero(ptr,nitems);
        return (ptr);
}
