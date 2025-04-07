/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:43:24 by inowak--          #+#    #+#             */
/*   Updated: 2024/07/29 09:43:26 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13 )|| base[i] == ' '||
			base[i] == '-' || base[i] == '+')
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

int	ft_verif_in_base(char *base, char c)
{
	int	i;
	
	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nb;
	int	len;

	if (check_base(base) == 0)
		return (0);
	len = ft_strlen(base);
	nb = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str [i] <= 13 )|| str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_verif_in_base(base, str[i]) != -1 && str[i])
	{
		nb = nb * len + ft_verif_in_base(base, str[i]);
		i++;
	}
	return (nb * sign);

}
