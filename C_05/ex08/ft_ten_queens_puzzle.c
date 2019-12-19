/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:07:45 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/05 12:20:23 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_abs(int a)
{
	return ((a < 0) ? a * -1 : a);
}

void	print_queen(int *tab, int size)
{
	int		i;
	char	tmp;

	i = -1;
	while (++i < size)
	{
		tmp = tab[i] + 48;
		write(1, &tmp, 1);
	}
	write(1, "\n", 1);
}

int		is_valid(int *tab, int i, int j)
{
	int	k;

	k = -1;
	while (++k < i)
	{
		if (tab[k] == j)
			return (0);
		if ((ft_abs((tab[k] - j))) == ((ft_abs(i - k))))
			return (0);
	}
	return (1);
}

void	backtrack(int *tab, int line, int *solution, int size)
{
	int	col;

	col = 0;
	*solution += (line == size);
	if (line == size)
		print_queen(tab, size);
	while (line < size && col < size)
	{
		if ((is_valid(tab, line, col)))
		{
			tab[line] = col;
			backtrack(tab, line + 1, solution, size);
		}
		col++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	size;
	int	solution;
	int	i;

	i = 0;
	size = 10;
	solution = 0;
	while (i < size)
	{
		tab[i] = 0;
		i++;
	}
	backtrack(tab, 0, &solution, size);
	return (solution);
}
