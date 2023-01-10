/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:53:46 by emillier          #+#    #+#             */
/*   Updated: 2023/01/10 17:50:33 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	h;

	i = ft_strlen(s);
	str = (char *)s;
	h = c;
	while (i >= 0)
	{
		if (str == 0)
			return (NULL);
		if (str == NULL)
			return (str);
		if (str[i] == h)
			return (str + i);
		i--;
	}
	return (NULL);
}
