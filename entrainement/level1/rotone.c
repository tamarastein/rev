/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 11:19:42 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/27 13:44:32 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
char	rotonemin(char c)
{
	c = c - 97;
	c = (c + 1) % 26;
	c = c + 97;
	return (c);
}

char	rotonemaj(char c)
{
	c = c - 65;
	c = (c + 1) % 26;
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
				argv[i][j] = rotonemin(argv[i][j]);
			else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				argv[i][j] = rotonemaj(argv[i][j]);
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
	}
}
