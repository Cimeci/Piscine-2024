/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:22:44 by inowak--          #+#    #+#             */
/*   Updated: 2024/07/24 20:25:55 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	baselen;
	
	i = 0;

	baselen = ft_strlen(base);
	if (baselen <= 1)
		return (0);
	while (base[i])
	{	
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_recu(unsigned int nbr, char *base)
{
	unsigned int	baselen;
	
	baselen = ft_strlen(base);
	if (nbr >= baselen)
	{	
		ft_recu(nbr / baselen, base);

	}
	ft_putchar(base[nbr % baselen]);
	
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbrint;
	
	nbrint = nbr;
	if (ft_check_base(base) == 0)
	{
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbrint = (unsigned int) -nbr;
	}
	ft_recu(nbrint, base);
}
