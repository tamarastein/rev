/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lenline.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaji <jkaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/22 14:05:27 by jkaji             #+#    #+#             */
/*   Updated: 2015/08/22 17:30:40 by jkaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		lenx(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}

int		leny(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			count++;
		}
		i++;
	}
	return (count);
}

int		lenstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		identifycolle(char *str)
{
	char topr;
	char topl;
	char botr;

	topl = str[0];
	topr = str[lenx(str) - 1];
	botr = str[lenstr(str) - 2];
	if (topr == topl)
	{
		if (topl == botr)
		{
			return (0);
		}
		else
		{
			return (2);
		}
	}
	else
	{
		if (topl == botr)
		{
			if (topl == '/')
			{
				return (1);
			}
			if (topl == 'A')
			{
				return (4);
			}
		}
		else
		{
			return (3);
		}
	}
	return (00);
}

int main()
{
	char *str;

	str = "/**\\\n*  *\n*  *\n\\**/\n";
	printf("%s", str);
	printf("%d\n", lenx(str));
	printf("%d\n", leny(str));
	printf("%d\n", identifycolle(str));
	return (0);
}
