#include <stdio.h>

void ShowAllString(int argc, char * argv[]) {
    int i;
    for (i=0; i<argc; i++) {
        printf("%p, %s \n", &argv[i], argv[i]);
    }
}

int main() {
    char * str[3] = {
        "C Programming",
        "C++ Programming",
        "Java Programming"
    };
    ShowAllString(3, str);

    return 0;
}