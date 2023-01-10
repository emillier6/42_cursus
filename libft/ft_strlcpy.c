/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:49:40 by emillier          #+#    #+#             */
/*   Updated: 2022/12/20 17:13:37 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t  c;

  c = 0;
  while (src[c] != '\0' && c < dstsize - 1)
  {
    dst[c] = src[c];
    c++;
  }
  dst[c] = '\0';
  c = 0;
  while (src[c] != '\0' )
  {
    c++;
  }
  return (c);
}
