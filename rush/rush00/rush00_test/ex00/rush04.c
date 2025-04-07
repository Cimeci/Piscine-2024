/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:49:09 by inowak--          #+#    #+#             */
/*   Updated: 2024/07/13 16:11:31 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_cond(int x, int y, int c, int l)
{
	if ((c == 1 && l == 1) || (c == x && l == y))
		ft_putchar('A');

	if ((c == 1 && l == y) || (c == x && l == 1))
		ft_putchar('C');

	if (((l >=2) && (l < y)) && ((c == 1) || (c == x)))
 		ft_putchar('B');

	if ((c >= 2) && (c < x) && ((l >= 2) && (l < y)))
		ft_putchar(' ');

	if (((c>=2) && (c != x)) && ((l == 1) || (l == y)))
		ft_putchar('B');


}

void	rush(int x, int y)
{
	int	c;//colone
	int	l;//ligne

	c = 1;
	while(c < y +1)
	{
		l = 1;
		while(l < x + 1)
		{
			ft_cond(y, x, c, l);
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}

int	main()
{
	rush(2, 6);
	return (0);
}
