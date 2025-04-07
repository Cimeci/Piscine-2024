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

void	ft_putchar(char c);

void	print_start_end(char a, char b, char c, int colonne)
{
	int	i;

	i = 0;
	ft_putchar(a);
	while (i < colonne - 2)
	{
		ft_putchar(b);
		i++;
	}
	if (colonne > 1)
		ft_putchar(c);
	ft_putchar('\n');
}

void	print_mid(char a, int colonne)
{
	int	i;

	i = 0;
	ft_putchar(a);
	while (i < colonne - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (colonne > 1)
		ft_putchar(a);
	ft_putchar('\n');
}

void	rush(int colonne, int ligne)
{
	int	k;

	k = 0;
	if (ligne == 1 && colonne >= 1)
		print_start_end('A', 'B', 'C', colonne);
	else if (ligne > 1 && colonne >= 1)
	{
		print_start_end('A', 'B', 'C', colonne);
		while (k++ < ligne - 2)
			print_mid('B', colonne);
		print_start_end('C', 'B', 'A', colonne);
	}
}
