/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:52:55 by hyungjup          #+#    #+#             */
/*   Updated: 2022/11/09 12:37:34 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}