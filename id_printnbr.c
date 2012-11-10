#include "lib.h"

void	id_printnbr(int n)
{
	int	div;

	div = 1;
	while (n / div >= 10 || n / div <= -10)
		div = div * 10;
	if (n < 0)
		id_printchar('-');
	while (div > 0)
	{
		if (n > 0)
			id_printchar((n / div) % 10 + '0');
		else
			id_printchar((n / div) % 10 * -1 + '0');
		div = div / 10;
	}
}
