/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 00:46:31 by iarslan           #+#    #+#             */
/*   Updated: 2024/09/03 12:34:06 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *s1, int *s2)
{
	int	temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}
