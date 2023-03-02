#ifndef SHELL_H_
#define SHELL_H_

#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <signal.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define BUFSIZE 1024
#define NEWLINE '\n'
#define DELIM_T " \t\n\a\r"

extern char **environ;

/**
 * struct aliases - contains the aliases as a struct 
 * @name: of the alias
 * @value: of the alias
 * @next: next
 */
typedef struct aliases
{
	char *name;
	char *value;
	struct aliases *next;
} als_s;

/**
 * struct path - path variable
 * @str: string
 * @next: next
 */
typedef struct path
{
	char *str;
	struct path *next;
} path_l;

/**
 * struct data - structure containing shell data
 * @pid: process id
 * @arr: array of arguments
 * @_environ: the shell environment
 * @av: arguments vector
 * @status: shell status
 * @line: line of commands
 * @path: linked list of paths
 * @length: length
 */
typedef struct data
{
	pid_t pid;
	als_s aliases;
	char **alias;
	char **arr;
	char **_environ;
	char **av;
	int status;
	char *line;
	path_l *path;
	size_t length;
} sh_data;

/**
 * struct built_in - structure for builtin functions
 * @str: string
 * @func: pointer to function
 */
typedef struct built_in
{
	char *str;
	int (*func)(sh_data *);
} built_in;

char **get_commands(char *, size_t);
char *_getenv(sh_data *, char *);
char *mod_env(sh_data *);
char *check_shell(sh_data *);
char *my_strcat(char *, char *);
char *my_strcpy(char *, char *);
char *my_strdup(char *);
char *my_strtok(char *, const char *);
char *search_path(path_l *, char *);
int (*get_func(char **))(sh_data *);
int fetch_alias(sh_data *, char *);
int my_atoi(char *);
int my_alias(sh_data *);
int my_cd(sh_data *);
int my_env(sh_data *);
int my_exit(sh_data *);
int my_set(sh_data *);
int my_unset(sh_data *);
int my_isdigit(char *);
int my_strcmp(char *, char *);
int my_strlen(char *);
int rm_comments(char **);
path_l *add_node_end(path_l **, char *);
path_l *path_to_list(char **);
size_t print_list(const path_l *);
ssize_t my_getline(char **, size_t *, FILE *);
void *my_memchr(register const void *, int, size_t);
void *my_realloc(void *, unsigned int, unsigned int);
void free_arr2(char **);
void free_list(path_l *);
void get_signal(int);
void insert_line(char **, size_t *n, char *, size_t);
void my_memcpy(void *, const void *, unsigned int);
void print_path_dir(void);
void get_alias(sh_data *);
void reverse_str(char *);

#endif
