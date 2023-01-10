/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:59:53 by emillier          #+#    #+#             */
/*   Updated: 2022/12/20 17:15:51 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	size_t  asig;
        void    *res;

        asig = size * count;
        res = malloc(asig);
        if (!res)
                return (0);
        ft_memset(res, 0, asig);
        return (res);
}
