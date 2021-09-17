/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:12:45 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/13 22:01:58 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static	int ft_atoi(char *str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str== '-')
	{
		sign = -1;
	}
	if (*str == '-' && *str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nbr * sign);
}

static	void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nbr);
	}
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
}

static int		is_prime(int nbr)
{
	int		i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	if (nbr % i == 0)
		return (1);
	else
		return (0);
}

static int		is_prime_sum(int nbr)
{
	int		i;
	int		sum;

	i = 2;
	sum = 0;
	while (i <= nbr)
	{
		if (is_prime(i))
			sum = sum + i;
		i++;
	}
	return (sum);
}

int		main(int ac, char **av)
{
	int		number;
	int		sum;

	if (ac != 2)
		write(1, "0\n", 2);
	else if ((number = ft_atoi(av[1])) < 0)
		write(1, "0\n", 2);
	else
	{
		sum = is_prime_sum(number);
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	return (0);
}
