#include "lib.h"

int	id_atoi(char* str)
{
	int	minus;
	int	nb;

	minus = 1;
	nb = 0;
	while ((*str < '0' || *str > '9') && *str != 0)
	{
		if (*str == '-')
			minus = -minus;
		str = str + 1;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = 10 * nb + (*str - '0');
		str = str + 1;
	}
	return (nb * minus);
}
