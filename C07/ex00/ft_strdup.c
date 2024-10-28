/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:23:38 by iarslan           #+#    #+#             */
/*   Updated: 2024/09/04 16:13:28 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	x;

	x = 0;
	while (c[x])
		x++;
	return (x);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*target;
	int		strlen;

	strlen = ft_strlen(src);
	i = 0;
	target = (char *)malloc((strlen + 1) * sizeof(char));
	if (target == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		target[i] = src[i];
		i++;
	}
	target[i] = '\0';
	return (target);
}
