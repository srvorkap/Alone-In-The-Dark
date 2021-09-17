/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:25:05 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/14 20:25:33 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		convertor(int	 c)
{
	if (c >= '0' && c <= '9')
		return (48);
	else if (c >= 'a' && c <= 'z')
		return (87);
	else if (c >= 'A' && c <= 'Z')
		return (55);
	else
		return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		nb;
	int		sign;

	nb = 0;
	sign = 1;
	while (*str == 32 ||( *str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while ((*str >= '0' && *str < '9') || (*str >= 97 && *str <= 102) || (*str >= 65 && *str <= 70))
	{
		nb = nb * str_base + *str - convertor(*str);
		str++;
	}
	return (sign * nb);
}
