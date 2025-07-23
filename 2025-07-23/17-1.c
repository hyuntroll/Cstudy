#include <stdio.h>

void MaxAndMin(int arr[], int **maxP, int **minP) {
    *maxP = &arr[0];
    *minP = &arr[0]; 
    for ( int i=1; i<5; i++) {
        if ( **maxP < arr[i]) {
            *maxP = &arr[i];
        }
        else if ( **minP > arr[i]) {
            *minP = &arr[i];
        }
    
    }
}

int main() {

    int * maxPtr;
    int * minPtr;
    int arr[5] = {5, 7, 4, 3, 6};
    MaxAndMin(arr, &maxPtr, &minPtr);
    printf("%d %d \n", *minPtr, *maxPtr);

    return 0;
}