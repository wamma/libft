/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:06:31 by hyungjup          #+#    #+#             */
/*   Updated: 2022/11/09 16:48:09 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*tmp;
	const char	*str;

	tmp = dest;
	str = src;
	if (tmp == NULL && str == NULL)
		return (NULL);
	i = -1;
	if (tmp < str)
	{
		while (++i < len)
			tmp[i] = str[i];
	}
	else
	{
		i = len;
		while (i)
		{
			tmp[i - 1] = str[i - 1];
			i--;
		}
	}
	return (dest);
}
