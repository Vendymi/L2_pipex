/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:42:34 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/12 15:44:42 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (&((char *)str)[ft_strlen(((char *)str))]);
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == c)
		return (&((char *)str)[i]);
	return (0);
}
