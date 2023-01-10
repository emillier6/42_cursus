/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:50:52 by emillier          #+#    #+#             */
/*   Updated: 2022/11/26 13:08:45 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	char	*dest;
	char	*source;
	size_t	dst_length;
	size_t	remain;

	dest = dst;
	source = (char *)src;
	remain = dstsize;
	while (remain-- != 0 && *dest != '\0')
		dest++;
	dst_length = dest - dst;
	remain = dstsize - dst_length;
	if (remain == 0)
		return (dst_length + ft_strlen(source));
	while (*source != '\0')
	{
		if (remain > 1)
		{
			*dest++ = *source;
			remain--;
		}
		source++;
	}
	*dest = '\0';
	return (dst_length + (source - src));
}
