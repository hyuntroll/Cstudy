#include <stdio.h>

int strlenC(char arr[]) {
    int len = 0;
    while (arr[len++]) {}
    return len-1;
}

int main() {

    char string[99];
    int boolean = 1;
    int len;
    printf("문자열 입력:");
    scanf("%s", string);
    len = strlenC(string);
    for (int i=0; i<len/2; i++) {
        // printf("%c %d\n", string[i], i);
        if (string[i] != string[len-i-1]) {
            boolean = 0;
            break;
        }
    }
    if (boolean) {
        printf("화문입니다.\n");
    }
    else {
        printf("화문이 아닙니다.\n");
    }
    // printf("%d", boolean);

    return 0;
}

