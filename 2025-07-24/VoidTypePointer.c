#include <stdio.h>

void SoSimplefunc(void)
{
    printf("I'm so simple");
}

int main() {

    //형 (Type)이 존재하지 않는 void 포인터
    // void * ptr; void형 포인터 변수 무엇이든 가능 
    // 대신 포인터 연산 참조는 불가 ++, -- 등

    int num = 20;
    void * ptr;
    
    ptr = &num;
    printf("%p \n", ptr);

    ptr=SoSimplefunc;
    printf("%p \n", ptr);

    return 0;
}