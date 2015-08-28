/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 09:37:54 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/28 11:00:18 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_count(char *str)
{
	int		k;

	k = 0;
	while(str[k])
	{
		k++;
	}
	return (k);
}

char *ft_strcpy(char *src)
{
	int		i;
	char 	*dest;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	ft_rev(char *str)
{
	int		i;
	int		j;
	char 	*dest;

	i = 0;
	j = ft_count(dest[i]);
	while (j != 0)
	{
		ft_putchar(dest[j]);
		j--;
	}
}

int		main(int argc, char **argv)
{
	int		k;

	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		k = ft_count(argv[1]);
		while(argv[1][k] == ' ')
		{
			k--;
		}
		while (argv[1][k] != ' ' && argv[1][k] != '\t' && argv[1][k] != 0)
		{
			*ft_strcpy(argv[1]);
			ft_rev(argv[1]);
			k--;
		}
	}
	ft_putchar('\n');
	return (0);
}
