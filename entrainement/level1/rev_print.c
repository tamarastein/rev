/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 11:50:10 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/27 12:39:52 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		count(char *c)
{
	int		k;

	k = 0;
	while (c[k] != '\0')
	{
		k++;
	}
	return (k);
}
int		main(int argc, char ** argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc && argc < 3)
	{
		j = count(argv[i]);
		while (j >= 0)
		{
			ft_putchar(argv[i][j]);
			j--;
		}
		i++;
	}
	ft_putchar('\n');
}
