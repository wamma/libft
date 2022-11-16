/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:42:26 by hyungjup          #+#    #+#             */
/*   Updated: 2022/11/16 19:30:53 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((ft_strlen(haystack) < ft_strlen(needle)) || (!haystack && !needle))
		return (NULL);
	if (*needle == '\0' || haystack == needle)
		return ((char *)haystack);
	while (*haystack && i < len)
	{
		j = 0;
		if (needle[j] == haystack[i + j])
		{
			while (haystack[j] && needle[i + j])
			{
				if (needle[j] != haystack[i + j] || (i + j) >= len)
					break ;
				j++;
			}
			if (needle[j] == '\0')
				return (&((char *)haystack)[i]);
		}
		i++;
	}
	return (NULL);
}
