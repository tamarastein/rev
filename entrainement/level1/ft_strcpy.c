/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twavresk <twavresk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 11:33:52 by twavresk          #+#    #+#             */
/*   Updated: 2015/08/27 11:49:37 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while(src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
}
