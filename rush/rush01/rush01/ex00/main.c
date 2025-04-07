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
#include <unistd.h>

int		recursive(int **tab, int i, int j, int *lst);

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

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_tableau(int *lst, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (i % 2 == 1)
		{
			if (str[i] != ' ')
				return (0);
		}
		else
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (0);
			lst[j] = str[i];
			j++;
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	**tab;
	int	i;
	int	j;
	int	lst[16];

	i = 0;
	j = 0;
	if (argc == 2 && ft_len(argv[1]) == 31 && ft_tableau(lst, argv[1]) != 0)
	{
		tab = ft_create(i, j);
		recursive(tab, i, j, lst);
		free(tab);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
