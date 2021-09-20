/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:26:27 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/14 19:23:43 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_atoi(char *str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nbr * sign);
}

void	hexa(int nbr)
{
	char	c;

	if (nbr >= 16)
		hexa(nbr / 16);
	if (nbr % 16 >= 10)
		c = nbr % 16 - 10 + 'a';
	else
		c = nbr % 16 + '0';
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		hexa(ft_atoi(av[1]));
		write(1, "\n", 1);
	}
	return (0);
}
