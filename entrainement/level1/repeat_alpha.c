/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 10:47:41 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/26 17:01:56 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			k = 1;
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				k = argv[i][j] - 96;
			else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				k = argv[i][j] - 64;
			while (k != 0)
			{
				ft_putchar(argv[i][j]);
				k--;
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}
