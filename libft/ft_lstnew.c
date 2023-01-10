/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:44:58 by emillier          #+#    #+#             */
/*   Updated: 2022/12/20 16:45:33 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
        t_list  *new_nodo;

        new_nodo = (t_list *)malloc(sizeof(t_list));
        if (!new_nodo)
                return (NULL);
        new_nodo->content = content;
        new_nodo->next = NULL;
        return (new_nodo);
}
