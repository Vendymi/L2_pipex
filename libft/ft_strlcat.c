/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:05:52 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/11 18:06:10 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	c;
	size_t	d;

	if (n <= ft_strlen(dest))
		return (n + ft_strlen(((char *)src)));
	c = ft_strlen(dest);
	d = 0;
	while (c + d < n - 1 && src[d] != '\0')
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (c + ft_strlen(((char *)src)));
}
