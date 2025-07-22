#include <stdio.h>

int strlen(char arr[]) {
    int len = 0;
    while (arr[len++]) {}
    return len-1;
}

int main() {

    char string[99];
    scanf("%s", string);

    printf("%d\n", strlen(string));

    return 0;
}