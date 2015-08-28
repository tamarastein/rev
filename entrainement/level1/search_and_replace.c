/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 13:01:37 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/27 13:21:07 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char ** argv)
{
	int		j;
	int		i;

	i = 1;
	while (i == 1 && argc < 5)
	{
		j = 0;
		while (argv[1][j] != 0)
		{
			if (argv[1][j] == argv[2][0])
				argv[1][j] = argv[3][0];
			ft_putchar(argv[1][j]);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}
