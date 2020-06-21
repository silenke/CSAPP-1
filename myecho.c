#include "code/include/csapp.h"

int main(int argc, char *argv[], char *envp[])
{
    int i;
    
    printf("Command-line arguments:\n");
    for (i = 0; i < argc; i++)
        printf("    argv[%2d]: %s\n", i, argv[i]);

    printf("Enviroment variables:\n");
    for (i = 0; environ[i] != NULL; i++)
        printf("    envp[%2d]: %s\n", i, environ[i]);

    exit(0);
}