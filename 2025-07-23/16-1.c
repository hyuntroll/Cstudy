#include <stdio.h>

int main() {
    int arr1[3][8];
    printf("%d", sizeof(arr1)/sizeof(int));
    printf("%d", sizeof(arr1[1])/sizeof(int));

    //층별로 2가구가 사는 4층짜리
    int apart[4][2];
    int sum;
    for (int i=0; i<4;i++) {
        for (int j=0; j<2; j++) {
            printf("%d층 %d호 인구수: ", i+1, j+1);
            scanf("%d", &apart[i][j]);
        }
    }
    for (int i=0; i<4; i++) {
        sum = 0;
        for (int j =0; j<2; j++) {
            sum += apart[i][j];
        }
        printf("%d층 인구수: %d\n", i+1, sum);
    }


    return 0; 
}