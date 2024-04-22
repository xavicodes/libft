/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:22:00 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/15 12:23:12 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
        void *ptr;
        
        ptr = malloc(sizeof(size) * (nitems));
        
        if(ptr == NULL)
        {
                return(NULL);
        }
                ft_bzero(ptr,nitems);
        return (ptr);
}