/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 14:18:09 by kmushta           #+#    #+#             */
/*   Updated: 2017/10/26 14:18:14 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n < 10 && n > -10)
	{
		if (n > -1)
			c = n + 48;
		else
		{
			write(fd, "-", 1);
			c = 48 - n;
		}
		write(fd, &c, 1);
	}
	else
	{
		if (n < 10)
			c = 48 - n % 10;
		else
			c = n % 10 + 48;
		ft_putnbr_fd(n / 10, fd);
		write(fd, &c, 1);
	}
}
