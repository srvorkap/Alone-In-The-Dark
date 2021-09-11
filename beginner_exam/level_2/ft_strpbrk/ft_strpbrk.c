/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:52:35 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/18 14:11:58 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
				break ;
			j++;
		}
		if (s2[j] == s1[i])
			break ;
		j = 0;
		i++;
	}
	if (s1[i] == '\0')
		return (NULL);
	else
		return ((char *)&(s1[i]));
}
