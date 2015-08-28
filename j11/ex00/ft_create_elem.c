/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 09:45:44 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/19 10:55:18 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list_h"

int		*ft_create_elem(void *data)
{
	t_list	*tmp;

	tmp  = malloc(sizeof(t_list));
	if(tmp)
	{	tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}
