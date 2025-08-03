#include <stdio.h>

void clearLineFromReadBuffer(void) {
    while(getchar()!='\n');
}

int main() {
    char name[4];
    char id[7];

    fgets(id, sizeof(id), stdin); clearLineFromReadBuffer();
    fgets(name, sizeof(name), stdin);

    puts(name);
    puts(id);

    return 0;
}