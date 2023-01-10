/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:56:04 by emillier          #+#    #+#             */
/*   Updated: 2023/01/10 17:13:29 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*c_temp;

	if (!lst)
		return ;
	else
	{
		while (*lst)
		{
			c_temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = c_temp;
		}
	}
}
