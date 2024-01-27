/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:03:51 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/11 17:04:26 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)src;
	if (tmp < ((char *)dest))
	{
		while (n--)
			((char *)dest)[n] = tmp[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
