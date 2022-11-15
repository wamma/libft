/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:36:20 by hyungjup          #+#    #+#             */
/*   Updated: 2022/11/11 16:39:40 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_charset(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	str_cnt;
	int	flag;

	str_cnt = 0;
	flag = 1;
	while (*str)
	{
		if (flag == 1 && !check_charset(*str, charset))
		{
			str_cnt++;
			flag = 0;
		}
		else if (check_charset(*str, charset))
			flag = 1;
		str++;
	}
	return (str_cnt);
}

char	*str_word_print(char *str, char *charset)
{
	char	*word;
	int		wc;
	int		i;

	wc = 0;
	i = 0;
	while (str[wc] && !check_charset(str[wc], charset))
		wc++;
	word = (char *)malloc(sizeof(char) * (wc + 1));
	if (!word)
		return (0);
	while (str[i] && !check_charset(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	len = word_count(s, c);
	i = 0;
	while (*s)
	{
		while (*s && check_charset(*s, c))
			s++;
		if (*s && !check_charset(*s, c))
		{
			result[i] = str_word();
		}
	}
}
