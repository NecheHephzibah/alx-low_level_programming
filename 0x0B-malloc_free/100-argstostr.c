#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int mib, zen;
	int raad = 0, lit = 0;
	char *str;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (mib = 0; mib < ac; mib++)
	{
		for (zen = 0; av[mib][zen]; zen++)
			lit++;
	}
	lit += ac;

	str = malloc(sizeof(char) * lit + 1);
	if (str == NULL)
		return (NULL);
	for (mib = 0; mib < ac; mib++)
	{
		for (zen = 0; av[mib][zen]; zen++)
		{
			str[raad] = av[mib][zen];
			raad++;
		}
		if (str[raad] == '\0')
		{
			str[raad++] = '\n';
		}
	}
	return (str);
}

