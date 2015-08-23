/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaji <jkaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 15:28:46 by jkaji             #+#    #+#             */
/*   Updated: 2015/08/23 16:20:28 by jkaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identifycolle.h"

#include "identifycolle2.h"

#include <stdio.h>

int main()
{
	char *str;

	str = "oo\noo\n";
	printf("input is:\n%s", str);
	printf("x is:%d\n", lenx(str));
	printf("y is:%d\n", leny(str));
	printf("number of colle is:%d\n", identifycolle2(str));
	return (0);
}
