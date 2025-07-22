#include <stdio.h>

void ShowAllData(const int * arr, int len) {
    int i;
    for ( i = 0; i<len; i++) {
        printf("%d", arr[i]);
    }

    // const int * arr로 한 이유는 가리키는 arr값이 함부로 변하지 않게 하기 위해서이다.
}

void ShowData(const int * ptr ) {
    int *rptr = ptr;
    prtinf("%d \n", *rptr);
    *rptr = 20;
}

int main() {
    // 포인터 변수가 참조하는 대상을 허용하지 않는 const
    int num = 20;
    int a = 30;
    const int * ptr= &num; // num을 변경할 수 없음 

    // *ptr = 20; 컴파일 에러
    num = 30;
    printf("%d\n", *ptr);
    ptr = &a;   
    printf("%d \n", *ptr);

    // 포인터 변수 const
    int * const constPtr =  &a;
    
    // constPtr = &num; 포인터가 가리키는 곳을 변경할 수 없음

    int num1 = 10;
    int * ptr = &num1;
    pritnf("%d", ptr);
    ShowData(ptr);


    return 0;
}