/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:53:46 by emillier          #+#    #+#             */
/*   Updated: 2022/10/31 18:58:04 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while(i >= 0)
	{
		if(c % 256 >= 1)
			c -= (256 * (c / 256));
		if(s[i] == c)
			return ((char*) &s[i]);
		i--;
	}
	return (0);
}
