/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:04:14 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/12 18:07:25 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*str;
	size_t	x;

	x = nitems * size;
	if (nitems == 0 || size == 0)
	{
		str = malloc(0);
		return (str);
	}
	if (x / nitems != size)
		return (0);
	str = malloc(x);
	if (!str)
		return (NULL);
	ft_bzero(str, size * nitems);
	return (str);
}
