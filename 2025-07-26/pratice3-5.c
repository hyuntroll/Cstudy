#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int com, usr, win=0, draw=0;
    char* rcp[] = {"바위", "가위", "보"};

    for (;;) {
        srand((int)time(NULL));
        com = rand()%3 +1;
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &usr);
        printf("%d %d \n", usr, com);
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, ", rcp[usr-1], rcp[com-1]);
        if ( com == usr) {
            printf("비겼습니다.\n");
            draw++;
        }
        else if ( com - usr == 1 || usr - com == 2)  {
            printf("당신이 이겼습니다.\n");
            win++;
        }
        else {
            printf("당신이 졌습니다. \n");
            break;
        }
    }
    printf("게임의 결과: %d승, %d무\n", win, draw);
    return 0;
}

