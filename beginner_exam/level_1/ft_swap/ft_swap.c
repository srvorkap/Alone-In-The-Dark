/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 03:50:08 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/19 04:10:22 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap_int(int a, int b)
{
	int		temp;

	temp = a;
	a = b;
	b = temp;
}

void	swap_ptr(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int		x;
	int		y;

	x = 3;
	y = 5;
	swap_int(x, y);
	printf("%d\n", x);
	return (0);
}
