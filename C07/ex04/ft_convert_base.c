/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:53:38 by iarslan           #+#    #+#             */
/*   Updated: 2024/08/31 19:20:13 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*check_sign(char *str, int *is_neg);
int		get_base_value(char c, char *base);
char	*ft_atoi_base(char *str, char *base, int *is_neg, int *size);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*check_sign(char *str, int *is_neg)
{
	*is_neg = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*is_neg *= -1;
		str++;
	}
	return (str);
}

int	get_base_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_atoi_base(char *str, char *base, int *is_neg, int *size)
{
	int	i;
	int	j;
	int	valid;

	str = check_sign(str, is_neg);
	i = 0;
	while (*str)
	{
		j = -1;
		valid = 0;
		while (base[++j])
			if (*str == base[j])
				valid = 1;
		if (!valid)
			break ;
		str++;
		i++;
	}
	*size = i;
	return (str - i);
}
