/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:10:58 by inowak--          #+#    #+#             */
/*   Updated: 2024/07/28 14:11:01 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char	*ft_create_tab(int nb);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str [i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int	len3(char *str, int nbint, int mod, int div)
{
	int	result2;
	int	result;
	int	total;
	int	modth;
	int	divth;

	nbint = ft_atoi(str);
	modth = nbint % 100 ;
	divth = nbint / 100;
	result = (divth * 1000 + 100);
	mod = (modth % 10);
	div = (modth / 10);
	result2 = (div * 100 + mod);
	total = (result * 1000 + result2);
	return (total);
}

//we have to put div, mod, nbint at 0
char	*algo(char *str, int mod, int div, int nbint)
{
	int	len;
	int	result;

	result = 0;
	len = ft_strlen(str);
	if (len == 1)
		return (str);
	if (len == 2)
	{
		nbint = ft_atoi(str);
		if (nbint > 19)
		{
			mod = (nbint % 10);
			div = (nbint / 10);
			result = (div * 100 + mod);
		}
		return (ft_create_tab(result));
	}
	if (len == 3)
		return (ft_create_tab(len3(str, nbint, mod, div)));
	return (0);
}
