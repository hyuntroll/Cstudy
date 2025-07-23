#include <stdio.h>

void BubbleSort(int arr[], int len) {
    int temp;
    for (int i=0; i<len; i++) {
        for (int j=0; j<i; j++) {
            if ( arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[10], i;
    for (i=0; i<10; i++) {
        printf("입력: ");
        scanf("%d", (arr+i));
    }
    BubbleSort(arr, sizeof(arr)/sizeof(int));
    for (i=0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}