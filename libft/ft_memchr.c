/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:37:39 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/12 16:41:18 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	if (n == 0)
		return (NULL);
	i = 0;
	s = (char *)str;
	while (s[i] != c && i < n - 1 && s[i] != '\0')
		i++;
	if (s[i] == c)
		return ((void *)(str + i));
	return (NULL);
}
