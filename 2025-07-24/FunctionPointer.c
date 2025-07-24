#include <stdio.h>

void simpleAddr(int n1, int n2) {
    printf("%d + %d = %d \n", n1, n2, n1+n2);
}

void ShowString(char * str ) {
    printf("%s \n", str);
}

void InterestingNew(void (*fptr) (int, int)) {
    fptr(3, 5);
}

int main() {

    char * str = "Functon Pointer";
    int num1 = 10, num2 = 20;

    void (*fptr1) (int, int) = simpleAddr;
    void (*fptr2) ( char *) = ShowString;

    fptr1(num1, num2);
    fptr2(str);

    InterestingNew(fptr1);
    InterestingNew(simpleAddr);


    return 0;
}