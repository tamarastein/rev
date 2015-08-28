/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 09:54:56 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/27 11:06:23 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rot13min(char c)
{ 
	c = c - 97;
	c = (c + 13) % 26;
	c = c + 97;
	return (c);
}	

char	rot13maj(char c)
{
	c = c - 65;
	c = (c + 13) % 26;
	c = c + 65;
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
		while (argv[i][j])
		{	
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{	
				argv[i][j] = rot13min(argv[i][j]);
			}
			else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
			{
				argv[i][j] = rot13maj(argv[i][j]);
			}
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}
