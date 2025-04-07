/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmassavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:21:47 by jmassavi          #+#    #+#             */
/*   Updated: 2024/07/20 16:12:55 by jmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_value_x(int *lst1, int *lst2, int **tab);

int	check_value_y(int *lst1, int *lst2, int **tab);

int	check(int *lst, int **tab)
{
	int	col_up[4];
	int	col_down[4];
	int	row_left[4];
	int	row_right[4];
	int	i;

	i = 0;
	while (i <= 15)
	{
		if (i <= 3)
			col_up[i] = lst[i];
		else if (i <= 7)
			col_down[i - 4] = lst[i];
		else if (i <= 11)
			row_left[i - 8] = lst[i];
		else if (i <= 15)
			row_right[i - 12] = lst[i];
		i++;
	}
	if (check_value_x(col_up, col_down, tab) == 0
		|| check_value_y(row_left, row_right, tab) == 0)
		return (0);
	return (1);
}
