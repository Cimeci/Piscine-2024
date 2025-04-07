/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotheres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:16:11 by jotheres          #+#    #+#             */
/*   Updated: 2024/07/28 16:25:39 by jotheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str);

int	ft_len_nb(int nb)
{
	int	count;

	count = 0;
	while (nb >= 10)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

char	*ft_itoa(int nb, char *tab)
{
	char	res;
	int		j;

	j = 0;
	while (nb != 0)
	{
		res = nb % 10 + '0';
		tab[j++] = res;
		nb /= 10;
	}
	tab[j + 1] = '\0';
	return (tab);
}

char	*ft_rev_res(char *res)
{
	int		lswp;
	int		swp;
	char	g;

	swp = 0;
	lswp = ft_strlen(res) - 1;
	while (swp < ft_strlen(res) / 2)
	{
		g = res[swp];
		res[swp] = res[lswp - swp];
		res[lswp - swp] = g;
		swp++;
	}
	return (res);
}

char	*ft_create_tab(int nb)
{
	int		len_tab;
	char	*tab;

	len_tab = ft_len_nb(nb);
	if (len_tab == 0)
	{
		write(1, "Error Malloc\n", 11);
		return (0);
	}
	tab = malloc (sizeof(char) * len_tab + 2);
	tab[0] = '\0';
	ft_itoa(nb, tab);
	ft_rev_res(tab);
	return (tab);
}
