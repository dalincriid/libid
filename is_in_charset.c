#include "lib.h"

int	is_in_charset(char c, char* charset)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (c == charset[i])
			return (1);
		i = i + 1;
	}
	return (0);
}
