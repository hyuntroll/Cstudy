#include <stdio.h>

int main() {

    int arr[10];
    int odd = 0, even = 9;
    int temp;
    printf("총 10개의 숫자 입력\n");
    for (int i = 0; i < 10; i++) {
        printf("입력: ");
        scanf("%d", &temp);
        arr[(temp%2==0) ? even-- : odd++] = temp;
    }
    printf("배열 요소의 출력 : ");
    for ( int i =0; i <10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    

    return 0;
}



