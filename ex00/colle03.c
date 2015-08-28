/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaji <jkaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 18:52:11 by jkaji             #+#    #+#             */
/*   Updated: 2015/08/26 10:27:45 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print(char c1, char m, char c2, int longeur)
{
	int i;

	i = 0;
	ft_putchar(c1);
	while (i < (longeur - 2))
	{
		ft_putchar(m);
		i++;
	}
	if (longeur > 1)
	{
		ft_putchar(c2);
	}
	ft_putchar('\n');
}

int		colle(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		ft_print('A', 'B', 'C', x);
		while (i < (y - 2))
		{
			ft_print('B', ' ', 'B', x);
			i++;
		}
	}
	if (y > 1)
	{
		ft_print('A', 'B', 'C', x);
	}
	return (0);
}
