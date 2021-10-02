 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 20:21:51 by srvorkap          #+#    #+#             */
/*   Updated: 2020/01/08 00:00:05 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Passed Moulinette 01.07.2020

int		sum_array(int *array, int n)
{
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum = sum + array[i];
		i++;
	}
	return (sum);
}

int		find_pivot(int *array, int n)
{
	int		i;
	int		left;
	int		right;

	i = 1;
	left = 0;
	right = sum_array(array + 1, n - 1);
	if (left == right)
		return (0);
	while (i < n)
	{
		left = left + array[i - 1];
		right = right - array[i];
		if (left == right)
			return (i);
		i++;
	}
	return (-1);
}
