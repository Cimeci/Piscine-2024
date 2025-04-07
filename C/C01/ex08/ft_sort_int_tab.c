/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:47:28 by inowak--          #+#    #+#             */
/*   Updated: 2024/07/14 10:47:34 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	y;
	int	i;
	int	temp;

	y = 0;
	i = 1;
	while (y < size)
	{
		i = y + 1;
		while (i < size)
		{
			if (tab[i] < tab[y])
			{
				temp = tab[i];
				tab[i] = tab[y];
				tab[y] = temp;
			}
			i++;
		}
		y++;
	}
}
