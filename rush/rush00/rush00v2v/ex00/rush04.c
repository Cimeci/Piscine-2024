/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabartho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:35:28 by sabartho          #+#    #+#             */
/*   Updated: 2024/07/13 09:35:29 by sabartho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_start_end(char a, char b, char c, int colonne)
{
	int	i;
	
	i = 0;
	ft_putchar(a);
	while (i < colonne - 2)
	{
		ft_putchar(b);
		i++;
	}
	if (i > 1)
		ft_putchar(c);
	ft_putchar('\n');
}

void print_mid(char a, int colonne)
{
	int	i;
	
	i = 0;
	ft_putchar(a);
	while (i < colonne - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (i > 1)
		ft_putchar(a);
	ft_putchar('\n');
}

void rush(int colonne, int ligne)
{	
	int	i;
	int	j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	print_start_end('A', 'B', 'C', colonne);
	if (ligne > 1)
	{
		while (k++ < ligne - 2)		
			print_mid('B', colonne);
		print_start_end('C', 'B', 'A', colonne);
	}
}

int main()
{
	rush(123, 42);
	return (0);
}
