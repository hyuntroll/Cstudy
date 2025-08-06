#include <stdio.h>

// 자료형 정의 과정에서  구조체 공용체 열거형 모두 다 ㅇㅇ 

typedef enum syllable
{
    Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7  
    // Do를 정수 1을 읨미하는 상수로 정의, sylloble형 변수에 저장이 가능
    // Syllable s = Do; 
    
} Syllable;

enum color { RED, BLUE, GREEN} ; // 값을 명시하지 않으면 0부터 1씩 증가하는 형태로 결정


// 구조체와 공용체는 변수를 선언하기 위해서 자료형을 정의하는 것.
// 열거형은 정의 한 후 연관이 있는 이름을 동시에 상수로 선언할 수 있음 <- 가독성을 높이는데 사용

void Sound(Syllable sy) 
{
    switch(sy)
    {
        case Do:
            puts("도는 하얀 도라지"); return ;
        case Re:
            puts("레는 둥근 레코드"); return ;
        default:
            return ;
    }
}

int main() {
    Syllable tone;
    for(tone=Do; tone<=Ti; tone+=1) {
        Sound(tone);
    } 

    return 0;
}