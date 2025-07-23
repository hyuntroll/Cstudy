#include <stdio.h>

void SimpleFunc(int * arr) {} // 또는 int arr[]

// 1차원 배열일 땐 상관없지만 2차원 일 때부터는 배열과 포인터의 차이가 명확히 드러나고 계산 방법이 다르게 나타나기 때문에 주의해야함


// 2차원 배열 (배열 포인터)
void TestPtr(int (*arr)[3], int row) {
    for (int i=0; i<row; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// 다른 방법 
void AnotherSolution(int arr[][3], int row) {}


int main() {
    int arr[10]; // int형 포인터
    SimpleFunc(arr);

    int darr[2][3] ={
        {4, 5, 6},
        {34, 668, 34}
    };
    TestPtr(darr, 2);

    return 0;
}