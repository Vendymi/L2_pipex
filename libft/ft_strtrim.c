/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:11:48 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/13 19:34:19 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = (int)ft_strlen((char *)s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[j] && char_check(s1[j], set))
		j++;
	while (len > j && char_check(s1[len -1], set))
		len--;
	new = (char *)malloc(sizeof(char) * (len - j + 1));
	if (new == NULL)
		return (NULL);
	while (j < len)
	{
		new[i] = s1[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
