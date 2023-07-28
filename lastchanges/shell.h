#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>

#define MAX_PATH 4096
#define MAX_ARGS 100

extern char **environ;
void prompt();
char *get_line();
void split_cmd(char *command, char **argv, int *argc);
void execute(char **argv);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
void execute(char **argv);
char *get_env_var(char *pathname);
int _strncmp(const char* string1, const char* string2, size_t n);
int _strcmp(char *s1, char *s2);
void process_input(char *input);

#endif
