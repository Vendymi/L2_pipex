/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:48:39 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/13 18:09:08 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	size_t	str1;
	size_t	str2;

	str1 = ft_strlen((char *)s1);
	str2 = ft_strlen((char *)s2);
	new = malloc(sizeof(char) * (str1 + str2 + 1));
	if (!new)
		return (NULL);
	if (s1)
	{
		ft_strlcpy(new, s1, str1 + 1);
		if (s2)
			ft_strlcat(new, s2, str2 + str1 + 1);
	}
	else
		ft_strlcpy(new, s2, str2 + 1);
	return (new);
}
