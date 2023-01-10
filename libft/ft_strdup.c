/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:00:40 by emillier          #+#    #+#             */
/*   Updated: 2022/12/20 17:17:39 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char    *cp;

        cp = (char *)malloc(ft_strlen(s1) + 1);
        if (!cp)
                return (0);
        ft_memcpy(cp, s1, ft_strlen(s1) + 1);
        return (cp);
}
