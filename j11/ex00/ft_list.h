/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 09:27:23 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/19 10:56:53 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef list_h
# define list_h

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif
