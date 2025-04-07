/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Disc2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:42:52 by czou              #+#    #+#             */
/*   Updated: 2024/07/27 18:10:52 by czou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_number(char num);

int	check_space(char spc);

int	check_printable(char ptr);

int	strlenbz(char *str, int len_str);

int	error(void)
{
	write(1, "Dict Error\n", 11);
	return (0);
}

int	verif(char *str, int elm, int result)
{
	if (check_number(str[elm]) == 1)
		elm++;
	else
		result = 1;
	while (check_number(str[elm]) == 1)
		elm++;
	if (str[elm] != ' ' && str[elm] != ':')
		result = 1;
	while (check_space(str[elm]) == 1)
		elm++;
	if (str[elm] == ':')
		elm++;
	else
		result = 1;
	while (check_space(str[elm]) == 1)
		elm++;
	if ((check_printable(str[elm]) == 1) && str[elm] != ' ')
		elm++;
	else
		result = 1;
	while (check_printable(str[elm]) == 1)
		elm++;
	if (result == 1)
		elm++;
	return (elm);
}

int	ft_check2(char *str, int len_str, int elm, int result)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		elm = count;
		if (!(check_number(str[elm]) == 1))
			return (error());
		while (str[elm] != '\n')
		{
			elm = verif(str, elm, result);
			len_str = strlenbz(str, len_str);
			if (elm > len_str || elm < len_str)
				result = 1;
			if (result == 1)
				return (error());
			if (str[elm++] == '\0')
				return (1);
		}
		count = elm;
	}
	return (1);
}

int	ft_check(char *str)
{
	int	len_str;
	int	elm;
	int	result;
	int	print;

	len_str = 0;
	elm = 0;
	result = 0;
	print = ft_check2(str, len_str, elm, result);
	return (print);
}
