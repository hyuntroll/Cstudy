#include <stdio.h>


int main(int argc, char *argv[]) {
    // ArgcArgv arg arg arg 하면 argc=3 argv = { "arg", "arg", "arg" }

    int i=0;
    printf("전단될 문자열의 수: %d \n", argc);

    for (i=0; i<argc; i++) {
        printf("%d번째 문자열: %s \n", i+1, argv[i]);
    }
    
    return 0;
}