#include <stdlib.h>
#include "lib.h"

int	id_strlen_charsetcmp(char* str, char* charset)
{
	int	i;

	i = 0;
	while(str[i] != 0 && id_strncmp(&str[i], charset, id_strlen(charset)))
		i = i + 1;
	return (i);
}

int	count_words(char* str, char* charset)
{
	char*	last;
	int	nbword;

	nbword = 0;
	last = charset;
	while (*str != 0)
	{
		if (!id_strncmp(last, charset, id_strlen(charset)) &&
		    id_strncmp(str, charset, id_strlen(charset)))
			nbword = nbword + 2;
		last = str;
		str = str + 1;
	}
	return (nbword);
}

int	add_cpy(char** ret, char* str, char* charset, int nbword)
{
	int		len;

	len = id_strlen_charsetcmp(str, charset);
	ret[nbword] = id_strndup(str, len);
	if (ret[nbword] == NULL)
		return (-1);
	nbword = nbword + 1;
	if (str[len] != 0)
	{
		ret[nbword] = id_strdup(charset);
		if (ret[nbword] == NULL)
			return (-1);
		nbword = nbword + 1;
	}
	str = str + len - 1;
	return (0);
}

int	copy_words(char** ret, char* str, char* charset)
{
	int	i;
	int	nbword;
	char*	last;

	i = 0;
	nbword = 0;
	last = charset;
	while (str[i] != 0)
	{
		if (!id_strncmp(last, charset, id_strlen(charset) - 1) &&
		    id_strncmp(&str[i], charset, id_strlen(charset) - 1))
		{
			if (add_cpy(ret, str, charset, nbword))
				return (-1);
			nbword = nbword + 2;
		}
		last = str;
		str = str + 1;
	}
	return (0);
}

char**	id_strwordtabstr(char* str, char* charset)
{
	char**	ret;
	int	nbword;

	nbword = count_words(str, charset);
	ret = calloc(nbword, sizeof(*ret));
	if (ret == NULL)
		return (NULL);
	if (copy_words(ret, str, charset))
	{
		id_word_tab_free(ret);
		return (NULL);
	}
	return (ret);
}
