#include <stdlib.h>
#include "lib.h"

char*	id_strdup(char* str)
{
	char*	ret;
	int	len;

	len = id_strlen(str);
	ret = malloc(sizeof(*ret) * (len + 1));
	if (!ret)
		return (0);
	ret = id_strcpy(ret, str);
	ret[len] = 0;
	return (ret);
}

char*	id_strndup(char* str, unsigned int size)
{
	char*		str_cpy;

	str_cpy = calloc(size + 1, sizeof(*str_cpy));
	if (str_cpy == NULL)
		return (0);
	str_cpy = id_strncpy(str_cpy, str, size);
	return (str_cpy);
}
