#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

Point AddPoint(Point point1, Point point2) {
    Point pos = {point1.xpos + point2.xpos, point1.ypos + point2.ypos};
    return pos;
}

Point SubPoint(Point point1, Point point2) {
    Point pos = {point1.xpos - point2.xpos, point1.ypos - point2.ypos};
    return pos;
}

void ShowPosition(Point point) {
    printf("[%d %d] \n", point.xpos, point.ypos);
}

int main() {
    Point pos1 = {2324, 3546354};
    Point pos2;
    pos2 = pos1;  // 대입 연산만 가능
    Point pos3 = {46, 3423};

    printf("%d \n", sizeof(pos1));

    ShowPosition(AddPoint(pos1, pos3));
    ShowPosition(SubPoint(pos1, pos3));

    return 0;
}