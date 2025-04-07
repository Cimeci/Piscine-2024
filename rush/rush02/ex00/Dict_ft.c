/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:02:51 by yamoisso          #+#    #+#             */
/*   Updated: 2024/07/28 14:02:56 by yamoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str);

int	check_number(char num)
{
	if (num < '0' || num > '9')
	{
		return (0);
	}
	return (1);
}

int	check_space(char spc)
{
	if (spc != ' ')
		return (0);
	return (1);
}

int	check_printable(char ptr)
{
	if (ptr < 32 || ptr > 126)
	{
		return (0);
	}
	return (1);
}

/*int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}*/

int	strlenbz(char *str, int len_str)
{
	int	size;

	size = ft_strlen(str);
	if (str[len_str] == '\n')
		len_str++;
	while (str[len_str] != '\n' && len_str < size)
		len_str++;
	return (len_str);
}
