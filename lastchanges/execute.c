#include "shell.h"

char *get_env_var(char *pathname) {
    char **env;
    size_t len_pathname;
    extern char **environ;
    if (pathname == NULL || pathname[0] == '\0') {
        return NULL;
    }
    len_pathname = _strlen(pathname);
    env = environ;
    while (*env != NULL) {
        if (_strncmp(*env, pathname, len_pathname) == 0 && (*env)[len_pathname] == '=') {
            return (&((*env)[len_pathname + 1]));
        }
        env++;
    }
    return NULL;
}

void execute(char **argv) {
    char *envp, *delimiters, *envp_copy, *token;
    char path[MAX_PATH];

    if (argv[0][0] == '/') {
        if (access(argv[0], X_OK) == 0) {
            pid_t child_pid = fork();

            if (child_pid == -1) {
                write(STDERR_FILENO, "Error: fork failed\n", sizeof("Error: fork failed\n") - 1);
                return;
            } else if (child_pid == 0) {
                if (execve(argv[0], argv, NULL) == -1) {
                    write(STDERR_FILENO, argv[0], strlen(argv[0]));
                    write(STDERR_FILENO, ": not found\n", sizeof(": not found\n") - 1);
                    exit(EXIT_FAILURE);
                }
            } else {
                waitpid(child_pid, NULL, 0);
            }
        } else {
            write(STDERR_FILENO, argv[0], strlen(argv[0]));
            write(STDERR_FILENO, ": not found\n", sizeof(": not found\n") - 1);
        }
    } else {
        envp = get_env_var("PATH");
        delimiters = ":";

        if (envp != NULL) {
            envp_copy = strdup(envp);
            token = strtok(envp_copy, delimiters);

            while (token != NULL) {
                strcpy(path, token);
                strcat(path, "/");
                strcat(path, argv[0]);

                if (access(path, X_OK) == 0) {
                    pid_t child_pid = fork();

                    if (child_pid == -1) {
                        write(STDERR_FILENO, "Error: fork failed\n", sizeof("Error: fork failed\n") - 1);
                        free(envp_copy);
                        return;
                    } else if (child_pid == 0) {
                        if (execve(path, argv, NULL) == -1) {
                            write(STDERR_FILENO, argv[0], strlen(argv[0]));
                            write(STDERR_FILENO, ": not found\n", sizeof(": not found\n") - 1);
                            free(envp_copy);
                            exit(EXIT_FAILURE);
                        }
                    } else {
                        waitpid(child_pid, NULL, 0);
                        free(envp_copy);
                        return;
                    }
                }

                token = strtok(NULL, delimiters);
            }

            free(envp_copy);
        }

        write(STDERR_FILENO, argv[0], strlen(argv[0]));
        write(STDERR_FILENO, ": not found\n", sizeof(": not found\n") - 1);
    }
}

