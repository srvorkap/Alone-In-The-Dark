/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 19:47:01 by srvorkap          #+#    #+#             */
/*   Updated: 2020/01/07 23:59:02 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Passed Moulinette 01.07.2020

int		count_of_2_in_single_number(int n)
{
	int		count;

	count = 0;
	while (n != 0)
	{
		if (n % 10 == 2)
			count++;
		n = n / 10;
	}
	return (count);
}

int		count_of_2(int n)
{
	int		number;
	int		count;

	number = 1;
	count = 0;
	while (number <= n)
	{
		count = count + count_of_2_in_single_number(number);
		number++;
	}
	return (count);
}
