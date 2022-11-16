/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:00:33 by hyungjup          #+#    #+#             */
/*   Updated: 2022/11/16 18:17:04 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*tmp;
	const char	*str;
	size_t		i;

	tmp = dest;
	str = src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		tmp[i] = str[i];
		i++;
	}
	return (dest);
}
