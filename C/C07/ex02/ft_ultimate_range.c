/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:03:57 by inowak--          #+#    #+#             */
/*   Updated: 2024/07/24 19:32:15 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min) + 1;
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main()
{
	int	*p;
	
	ft_ultimate_range(&p, 1, 50);
	for(int i = 0; i < 49; i++)
		printf("%d, ", p[i]);
}
