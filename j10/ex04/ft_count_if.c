/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 12:55:37 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/18 13:09:42 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (tab[i][j] != 0)
	{
		j = 0;
		while (tab[i][j])
		{
			if (f(tab[i][j] == 1))
				count++;
			else
				j++;
		}
		i++;
	}
	return (count);
}
