#include "lib.h"

char*	id_strcat(char* s1, char* s2)
{
	int	i;
	int	size;

	i = 0;
	if (s2 == 0)
		return (s1);
	size = id_strlen(s1);
	while (s2[i] != 0)
	{
		s1[i + size] = s2[i];
		i = i + 1;
	}
	s1[i + size] = 0;
	return (s1);
}
