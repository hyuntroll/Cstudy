#include <stdio.h>

void printMatrix(int n, int (*arr)[n]) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, i, j;
    int cnt = 1, row=0, col=0, dir=1;
    int arr[n][n];

    for (i=0; i<n; i++) {
        arr[row][col++] = cnt++;
    }
    dir = !dir; n--; col--;

    while (n>0) {
        for (i=0; i<n; i++) {
            arr[(dir)? --row : ++row][col] = cnt++;
        }
        for (i=0; i<n; i++) {
            arr[row][(dir)? ++col : --col] = cnt++;
        }
        
        dir = !dir; n--;
    }

    printMatrix(j, arr);


    return 0;
}

