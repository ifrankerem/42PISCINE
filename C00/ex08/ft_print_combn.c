/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:54:34 by iarslan           #+#    #+#             */
/*   Updated: 2024/08/15 16:55:10 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(char v[], int size, int last)
{
	int		i;

	i = 0;
	if (v[0] == last)
	{
		while (i < size)
			ft_putchar(v[i++]);
		write(1, "\n", 2);
		return ;
	}
	while (i < size)
		ft_putchar(v[i++]);
	write(1, ", ", 2);
}

void	init_combn(char v[], char v_max[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		v[i] = i + 48;
		v_max[i] = (10 - n) + i + 48;
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	v[9];
	char	v_max[9];
	int		flag;
	int		base;

	if (n <= 0 || n >= 10)
		return ;
	init_combn(v, v_max, n);
	print_array(v, n, v_max[0]);
	{
		while (v[0] != v_max[0])
		{
			flag = n - 1;
			while (v[flag] == v_max[flag])
				--flag;
			base = ++(v[flag]);
			while (flag < n - 1)
				v[++flag] = ++base;
			print_array(v, n, v_max[0]);
		}
	}
}
