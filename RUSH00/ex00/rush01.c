/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:06:29 by iarslan           #+#    #+#             */
/*   Updated: 2024/08/18 19:09:32 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_press(int uzunluk, char ilk, char orta, char son)
{
	int	countx;

	countx = 1;
	while (countx <= uzunluk)
	{
		if (countx == 1)
		{
			ft_putchar(ilk);
		}
		else if (countx == uzunluk)
		{
			ft_putchar(son);
		}
		else
		{
			ft_putchar(orta);
		}
		countx++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	county;

	county = 1;
	if (x >= 1 && y >= 1)
	{
		while (county <= y)
		{
			if (county == 1)
			{
				ft_press(x, '/', '*', 92);
			}
			else if (county == y)
			{
				ft_press(x, 92, '*', '/');
			}
			else
			{
				ft_press(x, '*', ' ', '*');
			}
			county++;
		}
	}
	else if (x <= 0 || y <= 0)
		return ;
}
