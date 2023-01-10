/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:05:25 by emillier          #+#    #+#             */
/*   Updated: 2022/10/28 19:38:15 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *aux;
	
	i = 0;
	aux = (unsigned char *)b;
	while(i < len)
	{
		aux[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
