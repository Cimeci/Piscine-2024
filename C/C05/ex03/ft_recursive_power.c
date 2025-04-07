/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:44:47 by inowak--          #+#    #+#             */
/*   Updated: 2024/07/23 14:56:01 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;	

	result = 1;
	if (power == 0)
	{
		return (1);
	}
	if (power != 1)
	{
		result = result * nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
	return (nb);
}
