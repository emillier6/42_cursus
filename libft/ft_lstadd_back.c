/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:51:39 by emillier          #+#    #+#             */
/*   Updated: 2022/12/20 16:53:02 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
        t_list  *temp;

        if (lst)
        {
                if (!*lst)
                        *lst = new;
                else
                {
                        temp = ft_lstlast(*(lst));
                        temp->next = new;
                }
        }
}
