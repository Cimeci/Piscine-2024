/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:13:46 by jmassavi          #+#    #+#             */
/*   Updated: 2024/07/20 19:13:48 by jmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_double_x(int loc, int **tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if ((i != j) && (tab[i][loc] != 0)
			&& (tab[j][loc] != 0) && (tab[i][loc] == tab[i][loc]))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	count_negative_value_x(int i, int *lst, int **tab)
{
	int	j;
	int	result;
	int	max;

	j = 3;
	result = 0;
	max = 0;
	while (j >= 0)
	{
		if (tab[i][j] > max)
		{
			result++;
			max = tab[i][j];
		}
		j--;
	}
	if (result > lst[i])
		return (0);
	return (1);
}

int	count_positive_value_x(int i, int *lst, int **tab)
{
	int	j;
	int	result;
	int	max;

	j = 0;
	result = 0;
	max = 0;
	while (j <= 4)
	{
		if (tab[i][j] > max)
		{
			result++;
			max = tab[i][j];
		}
		j++;
	}
	if (result > lst[i])
		return (0);
	return (1);
}

int	check_value_x(int *lst1, int *lst2, int **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (count_positive_value_x(i, lst1, tab) == 0
			|| count_negative_value_x(i, lst2, tab) == 0
			|| (check_double_x(i, tab) == 0))
			return (0);
		i++;
	}
	return (1);
}
