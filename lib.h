#ifndef __LIB_H__
#define __LIB_H__

void	id_printchar(char c);
void	id_printnbr(int n);
int	id_strlen(char* str);
int	id_printstr(char* str, int fd);
int	id_printnstr(char* str, int fd, int w);
int	id_error(char* str);
char*	id_getline(int fd);
int	id_atoi(char* str);
char*	id_itoa(int n);
char*	id_strcpy(char* s1, char* s2);
char*	id_strncpy(char* s1, char* s2, int n);
char*	id_strdup(char* str);
char*	id_strndup(char* str, unsigned int size);
int	is_in_charset(char c, char* charset);
void	id_word_tab_free(char** val);
char**	id_strwordtab(char* str, char* charset);
char**	id_strwordtabstr(char* str, char* charsetcmp);
int	id_strcmp(char* s1, char* s2);
int	id_strncmp(char* s1, char* s2, int n);
char*	id_strstr(char* s1, char* s2);
char*	id_revstr(char* str);
char*	id_strcat(char* s1, char* s2);
char*	str_sep_str(char* path, char* file_name, char* sep);
int	id_tput(char* str, int x, int y, int fd);

#endif
