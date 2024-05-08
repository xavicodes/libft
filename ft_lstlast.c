/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:18:34 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/05/08 11:14:12 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
        if(lst)
        {
        while(lst)
        {
        if(!lst->next)
                return (lst);
        lst = lst->next;
        }
        return (lst);
        }
        return (NULL);
}