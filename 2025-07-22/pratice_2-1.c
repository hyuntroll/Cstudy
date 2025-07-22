#include <stdio.h>

void printOdd(int arr[], int len) {
    int res[len];
    int cnt = 0;
    for ( int i = 0; i < len; i++) {
        if (arr[i]%2 != 0) {
            res[cnt++] = arr[i];
        }
    }
    printf("홀수 출력: ");
    for ( int i = 0; i < cnt; i++) {
        printf("%d", res[i]);
        if (cnt-1 != i)
            printf(", ");
    }
    
    printf("\n");
}

void printEven(int arr[], int len) {
    int res[len];
    int cnt = 0;
    for ( int i = 0; i < len; i++) {
        if (arr[i]%2 == 0) {
            res[cnt++] = arr[i];
        }
    }
    printf("짝수 출력: ");
    for ( int i = 0; i < cnt; i++) {
        printf("%d", res[i]);
        if (cnt-1 != i)
            printf(", ");
    }
    
    printf("\n");
}

int main() {

    int arr1[10];
    for ( int i = 0; i < 10; i++) {
        printf("입력: ");
        scanf("%d", &arr1[i]);
    }
    
    printOdd(arr1, sizeof(arr1)/sizeof(int));
    printEven(arr1, sizeof(arr1)/sizeof(int));

    return 0;
}