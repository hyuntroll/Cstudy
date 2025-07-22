#include <stdio.h>

int SquareByValue(int a) {
    return a * a;
}

void SquareByReference(int * a) {
    *a *= *a;
}

void Swap3(int*num1, int*num2, int*num3) {
    int temp1 = *num2;
    int temp2 = *num3;
    *num2 = *num1;
    *num3 = temp1;
    *num1 = temp2;
}

int main() {
    
    int a = 5;
    printf("%d \n", SquareByValue(a));
    SquareByReference(&a);
    printf("%d \n", a);

    int b = 4;
    int c = 2;
    int d = 6;
    Swap3(&b, &c, &d);
    printf("%d %d %d", b, c, d);


    return 0;
}