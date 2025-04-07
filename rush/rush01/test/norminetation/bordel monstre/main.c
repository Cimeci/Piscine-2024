/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:49:32 by jmassavi          #+#    #+#             */
/*   Updated: 2024/07/20 22:49:33 by jmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	recursive(int **tab, int i, int j, int *lst);

void	ft_save(int **tab);

int	**ft_create(int i, int j)
{
	int	**new_tab;

	new_tab = malloc (sizeof (int *) * 4);
	if (!new_tab)
		return (0);
	while (i < 4)
	{
		j = 0;
		new_tab[i] = malloc (sizeof(int) * 4);
		if (!new_tab[i])
		{
			free(new_tab);
			return (0);
		}
		while (j < 4)
		{
			new_tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (new_tab);
}

int	main(void)
{
	int	**tab;
	int	i;
	int	j;
	int	lst[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};

	i = 0;
	j = 0;
	tab = ft_create(i, j);
	i = 0;
	j = 0;
	recursive(tab, i, j, lst);
	free(tab);
	return (0);
}
