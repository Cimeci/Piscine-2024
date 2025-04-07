/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:43:12 by inowak--          #+#    #+#             */
/*   Updated: 2024/07/24 19:44:18 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len(int size, char **strs, char *sep)
{
	int	lenstrs;
	int	i;

	lenstrs = 0;
	i = 0;
	while (strs[i])
	{
		lenstrs = lenstrs + ft_strlen(strs[i]);
		i++;
	}
	return (ft_strlen(sep) * (size - 1) + lenstrs);
}

char	*ft_strcat(char *dest, char *src)
{
	char	dest_len;
	int		i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;
	int		len;

	if (size == 0)
		return ("");
	len = ft_len(size, strs, sep);
	tab = malloc(sizeof(char) * len + 1);
	if (*strs == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i < size - 1)
		{
			tab = ft_strcat(tab, sep);
		}
		i++;
	}
	return (tab);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	char *sep = "^";

	printf("%s",ft_strjoin(4, argv, sep));
}
