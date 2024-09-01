/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:53:48 by iarslan           #+#    #+#             */
/*   Updated: 2024/08/31 19:32:02 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	convert_to_base(long num, char *base, char *result, int *m);
void	reverse_result(char *result, int len);
int		ft_strlen(char *str);
char	*check_sign(char *str, int *is_neg);
int		get_base_value(char c, char *base);
char	*ft_atoi_base(char *str, char *base, int *is_neg, int *size);

int	basecheck1(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (1);
	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			return (1);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (1);
	}
	return (0);
}

int	convert_to_decimal(char *nbr, char *base)
{
	int	base_len;
	int	decimal_value;
	int	sign;
	int	i;
	int	pos_val;

	base_len = ft_strlen(base);
	decimal_value = 0;
	sign = 1;
	nbr = ft_atoi_base(nbr, base, &sign, &i);
	while (*nbr)
	{
		pos_val = get_base_value(*nbr, base);
		if (pos_val == -1)
			return (-1);
		decimal_value = decimal_value * base_len + pos_val;
		nbr++;
	}
	return (decimal_value * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal_value;
	char	*result;
	int		m;

	if (basecheck1(base_from) || basecheck1(base_to))
		return (NULL);
	decimal_value = convert_to_decimal(nbr, base_from);
	if (decimal_value == -1)
		return (NULL);
	result = (char *)malloc(34);
	if (!result)
		return (NULL);
	m = 0;
	convert_to_base(decimal_value, base_to, result, &m);
	reverse_result(result, m);
	return (result);
}

void	convert_to_base(long num, char *base, char *result, int *m)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (num == 0)
	{
		result[(*m)++] = base[0];
		result[*m] = '\0';
		return ;
	}
	if (num < 0)
	{
		result[(*m)++] = '-';
		num = -num;
	}
	while (num > 0)
	{
		result[(*m)++] = base[num % base_len];
		num = num / base_len;
	}
	result[*m] = '\0';
}

void	reverse_result(char *result, int len)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = len - 1;
	if (result[0] == '-')
		start = 1;
	while (start < end)
	{
		temp = result[start];
		result[start] = result[end];
		result[end] = temp;
		start++;
		end--;
	}
}
