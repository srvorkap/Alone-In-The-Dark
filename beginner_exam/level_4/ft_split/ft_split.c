/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 03:08:46 by srvorkap          #+#    #+#             */
/*   Updated: 2020/02/13 03:15:50 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_delimiter(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int		count_words(char *str)
{
	int		i;
	int		number_of_words;

	i = 0;
	number_of_words = 0;
	if (str[i] != '\0' && !is_delimiter(str[i]))
		number_of_words++;
	while (str[i] != '\0')
	{
		if (is_delimiter(str[i]) && !is_delimiter(str[i + 1]) && str[i + 1] != '\0')
			number_of_words++;
		i++;
	}
	return (number_of_words);
}

int		word_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && !is_delimiter(str[i]))
		i++;
	return (i);
}

char	*word_dup(char *str)
{
	int		len;
	char	*word;

	len = word_len(str);
	if (!(word = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	word[len] = '\0';
	len = len - 1;
	while (len >= 0)
	{
		word[len] = str[len];
		len--;
	}
	return (word);
}

void	fill_words(char **tab, char *str)
{
	int		i;
	int		word_index;

	i = 0;
	word_index = 0;
	while (is_delimiter(str[i]))
		i++;
	while (str[i] != '\0')
	{
		tab[word_index] = word_dup(&str[i]);
		word_index++;
		while (str[i] != '\0' && !is_delimiter(str[i]))
			i++;
		while (is_delimiter(str[i]))
			i++;
	}
}

char	**ft_split(char *str)
{
	int		number_of_words;
	char	**tab;

	number_of_words = count_words(str);
	if (!(tab = malloc(sizeof(char *) * (number_of_words + 1))))
		return (NULL);
	else
	{
		tab[number_of_words] = NULL;
		fill_words(tab, str);
		return (tab);
	}
}
