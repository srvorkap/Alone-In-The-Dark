/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 11:45:09 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/06 12:03:01 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int		result;

	if(ac != 4)
		printf("\n");
	else
	{
		if (av[2][0] == '+')
			result = atoi(av[1]) + atoi(av[3]);
		if (av[2][0] == '-')
			result = atoi(av[1]) - atoi(av[3]);
		if (av[2][0] == '*')
			result = atoi(av[1]) * atoi(av[3]);
		if (av[2][0] == '/')
			result = atoi(av[1]) / atoi(av[3]);
		if (av[2][0] == '%')
			result = atoi(av[1]) % atoi(av[3]);
		printf("%d\n", result);
	}
	return (0);
}
