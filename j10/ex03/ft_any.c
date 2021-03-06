/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 12:28:43 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/18 13:10:13 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int		i;
	int		j;

	i = 0;
	while (tab[i][j] != 0)
	{
		j = 0;
		while (tab[i][j])
		{
			if (f(tab[i][j]) == 1)
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}
