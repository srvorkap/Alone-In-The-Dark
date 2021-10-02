#include <unistd.h>
#include <stdio.h>

int		is_first(char c, char *str, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		is_last_first_character(char *str, int index)
{
	int		i;

	i = index + 1;
	while (str[i] != '\0')
	{
		if (is_first(str[i], str, i))
			return (0);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	char	character;
	int		count;

	i = 0;
	if (ac != 2)
		printf("\n");
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 65 && av[1][i] <= 90)
				av[1][i] = av[1][i] + 32;
			i++;
		}
		i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 97 && av[1][i] <= 122 && is_first(av[1][i], av[1], i))
			{
				character = av[1][i];
				j = i;
				count = 0;
				while (av[1][j] != '\0')
				{
					if (av[1][j] == character)
						count++;
					j++;
				}
				if (!is_last_first_character(av[1], i))
					printf("%d%c, ", count, character);
				else
					printf("%d%c", count, character);
				i++;
			}
			else
				i++;
		}
		printf("\n");
		return (0);
	}
}
