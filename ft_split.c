/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:36:20 by hyungjup          #+#    #+#             */
/*   Updated: 2022/11/16 15:01:58 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *str, char c)
{
	int	str_cnt;
	int	flag;

	str_cnt = 0;
	flag = 1;
	while (*str)
	{
		if (flag == 1 && *str != c)
		{
			str_cnt++;
			flag = 0;
		}
		else if (*str == c)
			flag = 1;
		str++;
	}
	return (str_cnt);
}

static char	*str_word_print(char const *str, char c)
{
	char	*word;
	int		wc;
	int		i;

	wc = 0;
	i = 0;
	while (str[wc] && str[i] != c)
		wc++;
	word = (char *)malloc(sizeof(char) * (wc + 1));
	if (!word)
		return (0);
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *str, char c)
{
	char	**result;
	int		i;
	int		len;

	if (!str)
		return (0);
	len = word_count(str, c);
	result = (char **)malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			result[i] = str_word_print(str, c);
			while (*str && *str != c)
				str++;
		}
		i++;
	}
	result[len] = NULL;
	return (result);
}
