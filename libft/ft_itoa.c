/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:11:51 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/18 16:10:15 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
}

unsigned int	check_cond(char *number, int n)
{
	unsigned int	num;

	if (n < 0)
	{
		number[0] = '-';
		num = -n;
	}
	else if (n == 0)
	{
		number[0] = '0';
		num = n;
	}
	else
		num = n;
	return (num);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	unsigned int	len;
	unsigned int	i;
	char			*number;

	len = check_len(n);
	number = malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	num = check_cond(number, n);
	i = 1;
	while (num > 0)
	{
		number[len - i] = num % 10 + 48 ;
		num = num / 10;
		i++;
	}
	number[len] = '\0';
	return (number);
}
