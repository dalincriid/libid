#include "lib.h"

char*	id_revstr(char* str)
{
	int	j;
	int	i;

	j = 0;
	i = id_strlen(str) - 1;
	while (i - j > 0)
	{
		str[j] = str[j] ^ str[i];
		str[i] = str[i] ^ str[j];
		str[j] = str[j] ^ str[i];
		j = j + 1;
		i = i - 1;
	}
	return (str);
}
