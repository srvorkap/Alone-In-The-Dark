/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 01:59:29 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/16 03:00:41 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_prime(int nb)
{
	int		i;

	i = 2;
	while (nb % i != 0)
		i++;
	if (nb == i)
		return (1);
	else
		return (0);
}

int		main(int ac, char **av)
{
	int		nb;
	int		is_first_prime;
	int		i;

	i = 2;
	is_first_prime = 1;
	if (ac != 2)
		printf("\n");
	else
	{
		nb = atoi(av[1]);
		while (nb > 1)
		{
			if (is_prime(i) && nb % i == 0)
			{
				if (is_first_prime == 1)
					printf("%d", i);
				else
					printf("*%d", i);
				is_first_prime = 0;
				nb = nb / i;
			}
			else
				i++;
		}
		printf("\n");
	}
	return (0);
}
