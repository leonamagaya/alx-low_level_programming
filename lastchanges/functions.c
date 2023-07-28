#include "shell.h"

void prompt() {
    char prompt_str[] = "$ ";
    write(STDOUT_FILENO, prompt_str, sizeof(prompt_str) - 1);
}

char *get_line() {
    char *line = NULL;
    size_t n = 0;
    ssize_t char_count;
    char nextline = '\n';
    char_count = getline(&line, &n, stdin);
    if (char_count == -1) {
        free(line);
        write(STDOUT_FILENO, &nextline, 1);
        exit(EXIT_SUCCESS);
    }
    return line;
}

void split_cmd(char *command, char **argv, int *argc) {
    char *token;
    char *delimiters = " \t\n";
    token = strtok(command, delimiters);
    while (token != NULL) {
        argv[(*argc)] = token;
        (*argc)++;
        token = strtok(NULL, delimiters);
    }
    argv[(*argc)] = NULL;
}

void process_input(char *input) {
    char *argv[100];
    int argc = 0;
    split_cmd(input, argv, &argc);
    if (argc > 0) {
        execute(argv);
    }
}
