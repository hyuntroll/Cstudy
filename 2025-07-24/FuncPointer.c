#include <stdio.h>

int SimpleFunc(int num) {} 
int SoSimple(int num1, int num2) {} 

// -> SimpleFunc는 함수의 주소값을 의미하는 상수형태 함수 포인터

// 포인터 형은 반환형과 매개변수 선언을 통해서 결정 
// 저기선 반환형이 int, 매개변수로 int 변수 하나로 선언된 포인터형

int main() {
    // 함수의 이름: 함수가 저장된 메모리 공간의 주소값.
    // 이를 저장하기 위한 포인터 변수를 별도로 선언 가능. -> 함수 포인터 변수
    printf("%p", printf);

    //  함수 포인터 변수 선언 방법
    int (*fptr) (int); // 반환형 int, 매개변수선언이 int 
    
    int (*fpttr) (int, int); // 반환형 int, 매개변수가 int int
    fpttr = SoSimple; 
    fpttr(3, 4); // -> Sosimple(3, 4); 

    return 0;
}