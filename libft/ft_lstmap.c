/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:58:04 by emillier          #+#    #+#             */
/*   Updated: 2022/12/20 16:58:40 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
        void    *temp;
        t_list  *new;
        t_list  *elem;

        if (!lst)
                return (0);
        new = NULL;
        while (lst)
        {
                temp = f(lst->content);
                elem = ft_lstnew(temp);
                if (!elem)
                {
                        del(temp);
                        ft_lstclear(&new, del);
                }
                ft_lstadd_back(&new, elem);
                lst = lst->next;
        }
        return (new);
}
