/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:01:37 by emillier          #+#    #+#             */
/*   Updated: 2022/12/20 16:17:55 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t  len_s;
        size_t  i;
        char    *str;

        if (!s)
                return (NULL);
        len_s = ft_strlen(s);
        if (start >= len_s)
                return (ft_strdup(""));
        i = 0;
        if (start + len == len_s + 1 || len > len_s)
                len = len_s - start;
        str = (char *)malloc(len + 1);
        if (!str)
                return (NULL);
        while (i++ < start)
                s++;
        ft_strlcpy(str, s, len + 1);
        return (str);
}
