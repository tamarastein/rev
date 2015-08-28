/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 11:17:27 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/19 13:31:57 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef list.h
# define list.h

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

void	*ft_create_elem(void *data);
#endif
