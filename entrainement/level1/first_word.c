/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 16:15:00 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/27 16:01:27 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		j;

	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		j = 0;
		while (argv[1][j] == ' ')
		{	
			j++;
		}
		while (argv[1][j] != ' ' &&  argv[1][j] != '	' && argv[1][j] != 0)	
		{
			ft_putchar(argv[1][j]);
			j++;
		}
		ft_putchar('\n');
	}
	return (0);
}
