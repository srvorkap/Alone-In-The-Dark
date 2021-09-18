/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 03:12:07 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/14 03:32:24 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int		first;
	int		second;
	int		i;
	int		pgcd;

	i = 1;
	if (ac != 3 || ((first = atoi(av[1])) <= 0) || ((second = atoi(av[2])) <= 0))
		printf("\n");
	else
	{
		while (first >= i && second >= i)
		{
			if (first % i == 0 && second % i == 0)
				pgcd = i;
			i++;
		}
		printf("%d\n", pgcd);
	}
	return (0);
}
