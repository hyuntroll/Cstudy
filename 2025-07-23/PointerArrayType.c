#include <stdio.h>


int main() {
    int num1 = 34;
    int num2 = 65;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int * pArr[] = { ptr1, ptr2 };
    int ** dptr = pArr;
    int **triplePtr[] = { pArr, dptr };
    printf("%d %d\n", (pArr[1]), **pArr);
    printf("%d %d\n", *dptr[0], *dptr[1]);

    printf("%d %d %d %d", *triplePtr[0][0], *triplePtr[0][1], *triplePtr[1][0], *triplePtr[1][1]);


    return 0;
}