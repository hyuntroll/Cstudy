#include <stdio.h>

int main() {
    
    int bin_number;
    int temp1[99] = {0};
    scanf("%d", &bin_number);

    int cnt = 1;
    while (bin_number) {
        // printf("%d \n", bin_number);
        temp1[cnt++-1] = bin_number%2;
        bin_number /= 2;
    }
    for (int i=cnt-2; i >= 0; i--) {
        printf("%d", temp1[i]);
    }
    printf("\n");

    return 0;
}

/*
bin_number = 12
cnt = 1

temp1[0] = 0
bin_number = 6, cnt = 2

temp1[1] = 0
bin_number = 3, cnt = 3

temp1[2] = 1
bin_number = 1, cnt = 4

temp[3] = 1
bin_number = 0, cnt = 5

*/