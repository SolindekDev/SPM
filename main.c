#include <curl/curl.h>
#include <stdio.h>
#include <string.h>

int args(char* arg) {
    if (strcmp(arg, "help") == 1) {
        return 0;
    } else if (strcmp(arg, "install") == 1) {
        return 1;
    } else if (strcmp(arg, "uninstall") == 1) {
        return 2;
    } else if (strcmp(arg, "update") == 1) {
        return 3;
    }
}

int main(int argc, char *argv[]) {
	if (argc < 2) {
        printf("\033[1m\033[32;1;3mSPM Soli Package Manager.\033[32;1;3m By Solindek\n\n\033[31;1;3mUsage:\033[0m \033[24;1;3mspm\033[0m install <packagename>\n       \033[24;1;3mspm\033[0m update <packagename>\n       \033[24;1;3mspm\033[0m uninstall <packagename>\n       \033[24;1;3mspm\033[0m help\n");
    } else {
        int state = args(argv[2]);
        switch (state) {
            case 0:
                printf("\033[1m\033[32;1;3mSPM Soli Package Manager.\033[32;1;3m By Solindek\n\n\033[31;1;3mUsage:\033[0m \033[24;1;3mspm\033[0m install <packagename>\n       \033[24;1;3mspm\033[0m update <packagename>\n       \033[24;1;3mspm\033[0m uninstall <packagename>\n       \033[24;1;3mspm\033[0m help\n");
                break;
            case 1:
                
                break;
            case 2: 
                break;
            case 3:
                break;
        }
    }    
    return 0;
}
