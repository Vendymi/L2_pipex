/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:14:43 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/12 18:19:51 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	i;

	i = -1;
	len = ft_strlen((char *)s);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!(dup))
		return (NULL);
	while (++i < len)
		dup[i] = (char)s[i];
	dup[len] = '\0';
	return (dup);
}
