/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:05:49 by iarslan           #+#    #+#             */
/*   Updated: 2024/08/24 17:39:30 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	str_len(char *base)
{
	int	x;

	x = 0;
	while (base[x] != '\0')
		x++;
	return (x);
}

int	basecheck(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == 0 || base[1] == '\0' || base[i] <= 32 || base[i] == 127)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	convert_to_base(long lgnbr, char *base, char *result, int *m)
{
	int	base_len;

	base_len = str_len(base);
	if (lgnbr == 0)
	{
		result[(*m)++] = base[0];
		return ;
	}
	while (lgnbr > 0)
	{
		result[(*m)++] = base[lgnbr % base_len];
		lgnbr = lgnbr / base_len;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		m;
	char	result[32];
	long	lngbr;

	m = 0;
	lngbr = (long)nbr;
	if (!(basecheck(base)))
		return ;
	else
	{
		if (lngbr < 0)
		{
			ft_putchar('-');
			lngbr = -lngbr;
		}
		convert_to_base(lngbr, base, result, &m);
	}
	while (m > 0)
		ft_putchar(result[--m]);
}
