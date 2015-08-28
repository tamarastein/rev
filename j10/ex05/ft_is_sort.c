/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 13:10:29 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/18 14:49:26 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int		i;
	int		j;

	i = 0;
	j = i + 1;
	while (j < lenght)
	{
		if (f(tab[i], tab[j]) > 0)
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
