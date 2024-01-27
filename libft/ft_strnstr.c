/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:59:00 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/12 17:06:53 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *sml, size_t n)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (sml[0] == '\0')
		return ((char *)big);
	while (i < n && big[i] != '\0')
	{
		if (big[i] == sml[0])
		{
			a = 0;
			while (big[i + a] == sml[a] && sml[a] != '\0' && i + a < n)
				a++;
			if (sml[a] == '\0')
				return (((char *)&big[i]));
		}
		i++;
	}
	return (0);
}
