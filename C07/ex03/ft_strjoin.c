/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:56:33 by iarslan           #+#    #+#             */
/*   Updated: 2024/08/27 13:55:30 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_allstring(int size, char **strs, char *sep, char *final)
{
	int	i;
	int	x;
	int	j;
	int	a;

	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			final[x++] = strs[i][j++];
		a = 0;
		if (i < size - 1)
		{
			while (sep[a])
				final[x++] = sep[a++];
		}
		i++;
	}
	final[x] = '\0';
	return (final);
}

int	compute_final(char **strs, int size, int len_sep)
{
	int	i;
	int	j;
	int	x;

	x = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		x = x + j + len_sep;
		i++;
	}
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final;
	int		len_sep;
	int		x;

	if (size == 0)
	{
		final = (char *)malloc(1 * sizeof(char));
		*final = '\0';
		return (final);
	}
	len_sep = ft_strlen(sep);
	x = compute_final(strs, size, len_sep);
	final = (char *)malloc(x * sizeof(char));
	final = ft_allstring(size, strs, sep, final);
	return (final);
}
