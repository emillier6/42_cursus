/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:08:59 by emillier          #+#    #+#             */
/*   Updated: 2022/12/20 17:21:11 by emillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
                ft_putstr_fd("-2147483648", fd);
        else
        {
                if (n < 0)
                {
                        ft_putchar_fd('-', fd);
                        n *= -1;
                }
                if (n > 9)
                        ft_putnbr_fd((n / 10), fd);
                ft_putchar_fd((n % 10) + 48, fd);
        }
}
