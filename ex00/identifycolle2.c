/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifycolle2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaji <jkaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 13:47:11 by jkaji             #+#    #+#             */
/*   Updated: 2015/08/26 10:29:31 by twavresk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int identifycolle2(char *str)
{
	int x;
	int y;

	x = lenx(str);
	y = leny(str);
	if (x >= 2 && y >= 2)
	{
		return (identifycolle(str));
	}
	if (x == 0 || y == 0)
	{
		return (543210);
	}
	if (x == 1 && y == 1)
	{
		if (str[0] ==  'o')
		{
			return (0);
		}
		if (str[0] == '/')
		{
			return (1);
		}
		if (str[0] == 'A')
		{
			return (234);
		}
	}
	if (x == 1 && y >= 2)
	{
		if (str[0] == 'o')
		{
			return (0);
		}
		if (str[0] == '/')
		{
			return (1);
		}
		if (str[0] == str[lenstr(str) - 2])
		{
			return (3);
		}
		else
		{
			return (24);
		}
	}
	if (y == 1 && x >= 2)
	{
		if (str[0] == 'o')
		{
			return (0);
		}
		if (str[0] == '/')
		{
			return (1);
		}
		if (str[0] == str[lenx(str) - 1])
		{
			return (2);
		}
		else
		{
			return (34);
		}
	}
	return (5);
}
