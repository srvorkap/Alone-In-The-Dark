/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 01:04:39 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/20 00:18:04 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	swap_data(t_list *a, t_list *b)
{
	int		temp;

	temp = a->data;
	a->data = b ->data;
	b->data = temp;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*temp;
	int		swapped;

	temp = lst;
	swapped = 1;
	while (swapped == 1)
	{
		swapped = 0;
		while (temp != 0 && temp->next != 0)
		{
			if (cmp(temp->data, temp->next->data) == 0)
			{
				swap_data(temp, temp->next);
				swapped = 1;
			}
			temp = temp->next;
		}
		temp = lst;
	}
	return (lst);
}
