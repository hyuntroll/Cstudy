#include <stdio.h>

void printMatrix(int arr[4][4]) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void RotateArr(int arr[][4]) {
    int roated[4][4] = { 0, };
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            roated[j][3-i] = arr[i][j];
        }
    }
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            arr[i][j] = roated[i][j];
        }
    }
}


// 구현 실패ㅜ
void RotateArr2(int (*arr)[4][4]) {
    int roated[4][4] = { 0, };
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            roated[j][3-i] = (*arr)[i][j];
        }
    }
    printf("%p", arr);
    arr = &roated;

}


// for (int i=0; i<4; i++) {
//     for (int j=0; j<4; j++) {
//         printf("%d ", 3-i); // 90도 회전시킬 때 열 = 3-행
//         // printf("%d ", j); // 90도 회전시킬 때 행 = 3-열
//         temp = matrix[j][3-i];
//         matrix[j][3-i] = matrix[i][j];
//         matrix[i][j] = temp;
//     }
//     printf("\n");
// }

int main() {
    
    int matrix[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};


    printMatrix(matrix);
    printf("\n");
    RotateArr(matrix);
    printMatrix(matrix);
    printf("\n");
    RotateArr(matrix);
    printMatrix(matrix);
    printf("\n");
    RotateArr(matrix);
    printMatrix(matrix);

    return 0;
}


/*
1 2 3 4    0, 0 -> 0, 3  0, 1 -> 1, 3 -> 2, 3
5 6 7 8    1, 0 -> 1, 2
9 10 11 12
13 14 15 16

*/