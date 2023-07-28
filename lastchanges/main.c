#include "shell.h"

int main(int argc, char *argv[]) {
	int i;
	char *line;
	char *argv[100];
      

	if (argc == 1) {
    
      while (1) {
        prompt();
        line = get_line();
        process_input(line);
        free(line);
    }
} else {
    for ( i = 1; i < argc; i++) {
	    
        split_cmd(argv[i], argv, &argc);
        execute(argv);
    }
}
       return 0;
}
