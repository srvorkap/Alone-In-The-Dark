/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 13:51:05 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/12 14:34:53 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static	void	putnumber(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		putnumber(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		putnumber(-nb);
	}
	else if (nb >= 10)
	{
		putnumber(nb / 10);
		putnumber(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

int		main(void)
{
	int		i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			putnumber(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
