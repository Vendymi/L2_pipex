/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:33:06 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/11 19:38:29 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	int		last;
	size_t	len;

	if (c == '\0')
		return (&((char *)str)[ft_strlen((char *)str)]);
	len = ft_strlen((char *)str);
	last = -1;
	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			last = i;
		i++;
	}
	if (last != -1)
		return ((char *)&str[last]);
	return (NULL);
}
