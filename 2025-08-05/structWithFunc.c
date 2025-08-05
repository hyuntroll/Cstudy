#include <stdio.h>

void SimpleFunc(int num) { }
typedef struct point {
    int xpos;
    int ypos;
} Point;

void ShowPosition(Point point) {
    printf("[%d %d] \n", point.xpos, point.ypos);
}

Point getCurrentPosition(void) {
    Point cen;
    printf("Input current pos: ");
    scanf("%d %d", &cen.xpos, &cen.ypos);

    return cen;
}

typedef struct perosn {
    char name[20];
    char phoneNum[20];
    int age;
} Person;

void ShowPersonInfo(Person person) {
    printf("name: %s \n", person.name);
    printf("phoneNum: %s \n", person.phoneNum);
    printf("age: %i \n", person.age);
}

Person ReadPersonInfo(void) {
    Person cen;
    printf("name? ");
    scanf("%s", cen.name);
    printf("phoneNum? ");
    scanf("%s", cen.phoneNum);
    printf("age? ");
    scanf("%d", &cen.age);
    return cen;
}

void OrgSmTrans(Point * ptr) {
    ptr->xpos = (ptr->xpos) * -1;
    ptr->ypos = (ptr->ypos) * -1;
}


int main() {

    int age = 24;
    SimpleFunc(age); // 매개변수 Num에 전달 ( 복사 )

    Point point = {12, 43};
    ShowPosition(point); // 마찬가지로 '복사' 

    point = getCurrentPosition();
    ShowPosition(point);

    OrgSmTrans(&point);
    ShowPosition(point);

    Person man = ReadPersonInfo();
    ShowPersonInfo(man);

    return 0;
}