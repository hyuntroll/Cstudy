#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int main(void) {
    int seed, i;
    // printf("씨드 값 입력: ");
    // scanf("%d", &seed);
    // srand(seed);

    // for(i=0; i<5; i++)
    //     printf("난수 출력: %d \n", rand());


    // srand((int)time(NULL));
    // for(i=0; i<5; i++)
    //     printf("난수 출력: %d \n", rand());

    for(i=0; i<2; i++) {
        srand((int)time(NULL)+i);
        printf("주사위 %d의 결과 %d \n", i+1, rand()%6+1);
    }

    return 0;
}

