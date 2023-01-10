/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:03:12 by emillier          #+#    #+#             */
/*   Updated: 2022/12/20 16:20:11 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t  len;
        char    *n_str;

        if (!s1 || !set)
                return (NULL);
        while (*s1 && ft_strchr(set, *s1))
                s1++;
        len = ft_strlen(s1);
        while (len && ft_strchr(set, s1[len]))
                len--;
        n_str = ft_substr((char *)s1, 0, len + 1);
        return (n_str);
}
