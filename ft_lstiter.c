/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:12:36 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/05/08 10:50:40 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
        if(!lst)
                return ;
        while(lst)
        {
                f(lst->content);
                lst = lst->next;
        }
}
// void f(void *content)
// {
//         printf("itersting true nodes\n");
// }

// int main()
// {
//         char str[] = "abcd";
//         char str1[] = "efgh";

//         t_list *new = ft_lstnew(str);
//         t_list *new1 = ft_lstnew(str1);
//         printf("%s\n",(char *)new->content);
//                 ft_lstiter(new, f);
//         printf("%s\n",(char *)new1->content);
//                 ft_lstiter(new1, f);

//         free (new);
//         free(new1);
// }