/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:29:11 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/18 18:32:22 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

unsigned int	multidiv(unsigned int len)
{
	unsigned int	div;

	div = 1;
	while (len > 1)
	{
		div *= 10;
		len--;
	}
	return (div);
}
/*
unsigned int	check_len(int n)
{
	unsigned int	len;
	unsigned int	num;

	len = 0;
	if (n < 0)
	{
		len = 1;
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}*/

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	len;
	unsigned int	div;
	unsigned int	num;
	char			c;

	len = check_len(n);
	if (n < 0)
	{
		write(fd, "-", 1);
		num = -n;
		len -= 1;
	}
	else
		num = n;
	div = multidiv(len);
	while (len > 0)
	{
		c = num / div;
		num -= c * div;
		c += 48;
		write(fd, &c, 1);
		div = div / 10;
		len--;
	}
}
