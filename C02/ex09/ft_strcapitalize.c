/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:38:15 by iarslan           #+#    #+#             */
/*   Updated: 2024/08/20 18:06:51 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('A' <= str[i] && str[i] <= 'Z'))
			str[i] = str[i] + 32 ;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	a = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (a == 1)
				str[i] = str[i] -32;
			a = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			a = 0;
		else
			a = 1;
		i++;
	}
	return (str);
}
