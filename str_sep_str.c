#include <stdlib.h>
#include "lib.h"

char*	str_sep_str(char* path, char* file_name, char* sep)
{
	char*		tmp;
	unsigned int	size;

	size = id_strlen(path) + id_strlen(file_name) + id_strlen(sep) + 1;
	tmp = calloc(size, sizeof(*tmp));
	if (tmp == NULL)
		return (tmp);
	if (path != NULL)
		tmp = id_strcpy(tmp, path);
	tmp = id_strcat(tmp, sep);
	tmp = id_strcat(tmp, file_name);
	return (tmp);
}
