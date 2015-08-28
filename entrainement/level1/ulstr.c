/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 14:22:37 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/26 17:02:37 by twavresk         ###   ########.fr       */
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
	int 	j;

	i = 1;
	while (i < argc)
	{	
		j = 0; 
		while(argv[i][j])
		{
			if ('a' <= argv[i][j] && argv[i][j] <= 'z')
				argv[i][j] = argv[i][j] - 32;
			else if ('A' <= argv[i][j] && argv[i][j] <= 'Z')	
				argv[i][j] = argv[i][j] + 32;
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}
