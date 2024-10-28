/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:18:16 by iarslan           #+#    #+#             */
/*   Updated: 2024/09/01 13:39:45 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	if (c == 0)
		return (1);
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!char_in_charset(str[i], charset)
			&& (char_in_charset(str[i + 1], charset) || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

void	copy_words(char *str, char *charset, char **strs)
{
	int	i;
	int	a;
	int	len;

	i = 0;
	a = 0;
	while (str[i])
	{
		if (!char_in_charset(str[i], charset))
		{
			len = 0;
			while (str[i + len] && !char_in_charset(str[i + len], charset))
				len++;
			strs[a] = malloc(sizeof(char) * (len + 1));
			if (!strs[a])
				return ;
			len = 0;
			while (str[i] && !char_in_charset(str[i], charset))
				strs[a][len++] = str[i++];
			strs[a++][len] = '\0';
		}
		else
			i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		a;
	char	**strs;

	a = count_words(str, charset);
	strs = malloc(sizeof(char *) * (a + 1));
	if (strs == NULL)
		return (NULL);
	strs[a] = NULL;
	copy_words(str, charset, strs);
	return (strs);
}
