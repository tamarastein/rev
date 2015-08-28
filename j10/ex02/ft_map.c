/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 11:29:42 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/18 12:40:52 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int		i;
	int		j;
	int		*tab2;

	tab2 = (int *)malloc(sizeof(*tab) * (lenght));
	i = 0;
	while (i < lenght)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
	return (tab2);
}
