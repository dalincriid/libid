#include "lib.h"

int	check_str(char* s1, char* s2)
{
	int	len1;
	int	len2;

	len1 = id_strlen(s1);
	len2 = id_strlen(s2);
	if (len2 > len1)
		return (0);
	while (*s2 != 0)
	{
		if (*s1 != *s2)
			return (0);
		s1 = s1 + 1;
		s2 = s2 + 2;
	}
	return (1);
}

char*	id_strstr(char* s1, char* s2)
{
	while (*s1 != 0)
	{
		if (*s1 == *s2)
		{
			if (check_str(s1, s2))
				return (s1);
		}
		s1 = s1 + 1;
	}
	return (0);
}
