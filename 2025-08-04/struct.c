#include <stdio.h>

struct pos {
    int posx;
    int posy;

    struct pos * other_pos;
};

typedef struct pos Pos;

int main() {
    struct pos a;
    a.posx = 12;
    a.posy = 12;
    Pos b;
    b.posx = 13;
    b.posy = 14;

    b.other_pos = &a;

    Pos c[5] = {
        {12, 45},
        {56, 76},
        {34, 23},
        {56,  7},
        { 4,  5}
    };
    for (int i = 0; i < 5; i++) {
        printf("%d %d \n", c[i].posx, c[i].posy);
    }
    printf("%d", b.posx);
    printf("%d", b.other_pos->posx);
    printf("%d", (*b.other_pos).posx);


    return 0;
}