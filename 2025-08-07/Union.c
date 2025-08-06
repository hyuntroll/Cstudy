#include <stdio.h>


// 공용체 Union

// 구조체는 멤버는 각각 할당 되지만, 공용체는 가장 큰 메버 변수 만 하나 할당하여 공유함

/*
다양한 접근 방향 제시 가능
'하나의 메모리 공간'을 '둘 이상의 방식'으로 접근 할 수 있음

*/

typedef struct sbox {
    int men1;
    int men2;
    double men3;
} SBox;

typedef union ubox {
    int men1;
    int men2;
    double men3;
} UBox;


typedef struct dbshort {
    unsigned short upper;
    unsigned short lower;
} DBShort;

typedef union rdbuf {
    int iBuf;
    char bBuf[4];
    DBShort sBuf;
} RDBuf;

int main() {
    SBox sbox;
    UBox ubox;

    printf("%p %p %p \n", &sbox.men1, &sbox.men2, &sbox.men3);
    printf("%p %p %p \n", &ubox.men1, &ubox.men2, &ubox.men3); // 주소값이 다 같음

    printf("%d \n", sizeof(SBox));
    printf("%d \n", sizeof(UBox));

    RDBuf buf;
    printf("정수 입력: ");
    scanf("%d", &(buf.iBuf));

    printf("상위 2바이트: %u", buf.sBuf.upper);
    printf("하위 2바이트: %u", buf.sBuf.lower);
    printf("상위 1바이트 아스키 코드: %c", buf.bBuf[0]);
    printf("하위 1바이트 아스키 코드: %c", buf.bBuf[3]);

    return 0;
}