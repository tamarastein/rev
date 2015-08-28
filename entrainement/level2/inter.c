/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 22:12:19 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/27 22:36:54 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc && argc < 4)
	{
		j = 0;
		while (argv[1][j] && argv[2][j])
		{	
			if (argv[1][j] == argv[2][j])
				ft_putchar(argv[1][j]); 
			j++;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
