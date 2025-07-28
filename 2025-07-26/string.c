#include<stdio.h>

/*

// 문자 출력 함수     stdout으로 표현되는 표준 출력 스트림으로 전송하는 함수
int putchar(int c);
int fputc(int c, FILE * stream); // 원하는 스트림을 지정해줄 수 있으며 stdout으로 하면 putchar와 같다
// 호출 성공시 쓴 문자 정보가, 아니라면 EOF 반환


// 문자 입력 함수    stdin으로 표현되는 표준 입력 스트림으로부터 하나의 문자를 입력받아서 반환하는 함수a
int getchar(void);
int fgetc(FILE * stream); // 받는 스트림 지정 가능
// 파일 끝, 호출 실패시 EOF 반환

EndOfFile 파일의 끝을 나타내기 위해 정의해둔 상수

get시에 반환하는 경우
함수 호출 실패
윈도우 ctrl-z, 리눅스 ctrl-d 맥은 아마 ctrl-c


왜 char대신 int인가

char는 예외일 수 있음: 어떤 컴파일러에선 char를 unsigned char로 처리할 수도 있음
EOF는 -1이기 때문에 잘못된 양의 정수로 변환 될 수 있음


printf, scanf가 와 있는가?
서식 지정을 통해서 새로운 입출력 형태를 구성함 -> 사용하는 메모리 공간, 연산 양도 많아서 상대적으로 느림
하나만 출력하고 입력받을 땐 이거 쓰면 됨

*/

int main() {
    int ch1, ch2;

    ch1 = getchar();
    ch2= fgetc(stdin);

    putchar(ch1);
    fputc(ch2, stdout);


    int ch;
    while (1) {
        ch=getchar();
        if (ch== EOF)
            break;
        putchar(ch);
        printf("끝\n");
    }

    return 0;
}

