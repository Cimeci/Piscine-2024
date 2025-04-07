/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 09:57:32 by inowak--          #+#    #+#             */
/*   Updated: 2024/07/28 09:57:33 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_get(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		while (str[i] != ':')
			i++;
		if (str[i] == ':')
			i++;
		while (str[i] == ' ')
			i++;
		while (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		a = 0;
		while (str[i + a] == to_find[a])
		{
			if (to_find[a + 1] == '\0')
			{
				ft_get(str + i);
				return (str + i);
			}
			a++;
		}
		i++;
	}
	return (0);
}

char	*search(void)
{
	int		fd;
	int		sz;
	char	*c;

	c = malloc(sizeof(char) * 1000);
	fd = open("numbers.dict", O_RDONLY);
	if (fd < 0)
		return (0);
	sz = read(fd, c, 1000000);
	c[sz] = '\0';
	close(fd);
	return (c);
}

int	main(void)
{
	char	*tab;

	tab = "1000000000000000000000000000000000000";
	ft_strstr(search(), tab);
}
