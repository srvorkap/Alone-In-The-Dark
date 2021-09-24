/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 01:28:06 by srvorkap          #+#    #+#             */
/*   Updated: 2019/11/12 01:48:06 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		absolute_value(int nb)
{
	if (nb < 0)
		return (-nb);
	else
		return (nb);
}

int		ft_size(int nb)
{
	int		size;

	size = 0;
	if (nb <= 0)
		size = size + 1;
	while (nb != 0)
	{
		size++;
		nb = nb / 10;
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		size;

	size = ft_size(nbr);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	else
	{
		str[size] = '\0';
		if (nbr < 0)
			str[0] = '-';
		else if (nbr == 0)
			str[0] = '0';
		size = size - 1;
		nbr = absolute_value(nbr);
		while (size > 0)
		{
			str[size] = absolute_value(nbr % 10) + '0';
			nbr = nbr / 10;
			size--;
		}
		return (str);
	}
}
