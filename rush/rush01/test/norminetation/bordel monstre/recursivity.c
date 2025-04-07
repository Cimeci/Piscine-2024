/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursivity.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:06:54 by jmassavi          #+#    #+#             */
/*   Updated: 2024/07/20 18:40:37 by jmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	**ft_create(int i, int j);

int	check(int *lst, int **tab);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_display(int **tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(tab[i][j] + '0');
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_save(int **tab)
{
	int	**tab_save;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab_save = ft_create(i, j);
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab_save[i][j] = tab[i][j];
			j++;
		}
		i++;
	}
	ft_display(tab_save);
	free(tab_save);
}

int	recursive(int **tab, int i, int j, int *lst)
{
	int	value;

	value = 1;
	while (value <= 4)
	{
		ft_display(tab);
		tab[i][j] = value;
		if (check(lst, tab) == 1)
		{
			write(1, "yes\n", 4);
			if (i == 3 && j == 3)
				ft_save(tab);
			else if (j < 3)
				recursive(tab, i, j + 1, lst);
			else
				recursive(tab, i + 1, 0, lst);
		}
		else
			write(1, "no\n", 3);
		value++;
	}
	tab[i][j] = 0;
	return (0);
}
