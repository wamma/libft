/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:42:26 by hyungjup          #+#    #+#             */
/*   Updated: 2022/11/10 15:46:27 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	tmp;

	if (!*substr)
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		tmp = 0;
		if (substr[tmp] == str[i + tmp])
		{
			while (str[i] && substr[i + tmp])
			{
				if (substr[tmp] != str[i + tmp] || (i + tmp) >= len)
					break ;
				tmp++;
			}
			if (substr[tmp] == '\0')
				return (&((char *)str)[i]);
		}
		i++;
	}
	return ((void *)0);
}
