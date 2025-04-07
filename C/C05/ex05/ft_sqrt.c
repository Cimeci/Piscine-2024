/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:29:30 by inowak--          #+#    #+#             */
/*   Updated: 2024/07/22 14:29:31 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (a != nb && a < nb)
	{
		i++;
		a = 0;
		a = i * i;
	}
	if (a == nb)
		return (i);
	else
		return (0);
}
