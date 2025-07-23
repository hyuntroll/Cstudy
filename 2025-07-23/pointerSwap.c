#include <stdio.h>


void SwapPointer(int **p1, int **p2) {
    int * temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// 하다가 뭐지 싶었는데 이해됨 ㅋㅋ

int main() {
    int num1 = 1;
    int num2 = 2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    SwapPointer(&ptr1, &ptr2);
    printf("%d %d", *ptr1, *ptr2);

}