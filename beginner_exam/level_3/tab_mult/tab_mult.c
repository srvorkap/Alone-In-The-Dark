/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 07:51:18 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/14 08:11:19 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_atoi(const char *str)
{
	int		nb;
	int		sign;

	nb = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return (nb * sign);
}



int		main(int ac, char **av)
{
	int		i;
	int		input;
	int		result;
	char	c;

	i = 1;
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		input = ft_atoi(av[1]);
		while (i <= 9)
		{
			result = input * i;
			c = i + '0';
			write(1, &c, 1);
			write(1, " x ", 3);
			ft_putnbr(input);
			write(1, " = ", 3);
			ft_putnbr(result);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
