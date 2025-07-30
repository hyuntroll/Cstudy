#include <stdio.h>
#include <stdlib.h>

// 문자'열' 출력
int puts(const char * s);
int fputs(const char *s, FILE * steram);
// 성공시 음수가 아닌 값을, 실패시 EOF값을

//문자열 입력
char *  get(char * s);
char * fget(char * s, int n, FILE * stream);
// 파일 끝에 도달하거나 함수 호출 실패시 NULL 포인터 반환


//fgets은 \n이 있을 때까지 값을 문자열로 받아들이는데 이때 이를 일부로 받아들이기 때문


int main() {  
    char * str = "I'm So fucking crayzing man!!";
    puts(str);
    puts("Oh, It's So Fucking");

    fputs("Shit", stdout); // 출력후 자동 개행 X;


    char str1[7];
    gets(str1);
    
    fgets(str1, sizeof(str1), stdin);
    puts(str1);

    return 0;
}