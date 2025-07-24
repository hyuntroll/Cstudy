#include <stdio.h>

void SimplefuncOne(int arr1[], int arr2[] ) {}
void SimpleFuncTwo(int arr3[][4], int arr4[][4]) {}


void ComplexfuncOne(int** arr1, int* (*arr2)[5]) {}
void ComplexfuncTwo(int** arr3[], int*** (*arr4)[5]) {}


int main() {
    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][4];

    SimplefuncOne(arr1, arr2);
    SimpleFuncTwo(arr3, arr4);

    int* arr11[3];
    int* arr22[3][5];
    int** arr33[5];
    int*** arr44[3][5];

    ComplexfuncOne(arr11, arr22);
    ComplexfuncTwo(arr33, arr44);

    int arr[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("%d \n", arr[1][0][1]);
    printf("%d \n", (*(arr+1))[0][1]);
    printf("%d \n", (*arr[1])[1]);
    printf("%d \n", *(arr[1][0]+1));
    printf("%d \n", *(**(arr+1) +1));
    printf("%d \n", *(*arr[1]+1));


    return 0;
}


// int main() {

//     int * arr1[5];
//     int * arr2[3][5];
//     int **ptr1;
//     int * (*ptr2)[5]; // or int ptr2[][5];

//     ptr1 = arr1;
//     ptr2 = arr2;


//     return 0;
// }