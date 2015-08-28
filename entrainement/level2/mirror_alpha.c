/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mirror_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 15:28:32 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/27 18:08:50 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	mirrormin(char c)
{	

	c = 'z' + 'a' - c;
	return (c);
}

char mirrormaj(char c)
{
	c = 'Z' + 'A'- c;
	return (c);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc && argc < 3)
	{
		j = 0;
		while(argv[i][j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] = mirrormin(argv[i][j]);
			else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				argv[i][j] = mirrormaj(argv[i][j]);	
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
