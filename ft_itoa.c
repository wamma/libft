/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:00:50 by hyungjup          #+#    #+#             */
/*   Updated: 2022/11/14 15:08:18 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long long n)
{
	int	cnt;

	cnt = 0;
	if (n < 0)
	{
		n *= -1;
		cnt++;
	}
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			len;
	long long	tmp;

	tmp = n;
	len = get_len(tmp);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	result[len--] = '\0';
	if (tmp == 0)
		result[0] = 48;
	if (tmp < 0)
	{
		result[0] = '-';
		tmp *= -1;
	}
	while (len > 0)
	{
		result[len--] = tmp % 10 + '0';
		tmp /= 10;
	}
	return (result);
}
