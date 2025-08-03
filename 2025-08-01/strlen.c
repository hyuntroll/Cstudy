#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) 
{
    int len=strlen(str);
    str[len-1]=0;
}



int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("%s \n", str);
    RemoveBSN(str);
    printf("%s \n", str);

    // 문자열 복사
    char str1[100]; strcpy(str1, str);
    char str2[100]; strncpy(str2, str, 1);
    
    puts(str1);
    puts(str2);

    // 이외에도 strcat strncat, strcmp, strncmp 각각 문자열을 덭붙이고, 비교하는건데 n이 붙으면 그거까지만 확인하는거

    // atoi -> 문자열 내용을 int로 변환
    // atoli -> 문자열 내용을 long으로 변환
    // aotf -> 문자열 내용을 long형태로 변환

    return 0;
}