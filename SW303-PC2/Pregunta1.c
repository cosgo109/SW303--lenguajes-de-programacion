#include <stdio.h>

int x = 100;

void funcionA() {
    int x = 10;
    static int y = 5;
    x++;
    y++;
    printf("A: x=%d, y=%d, global=%d\n", x, y, x);
}

void funcionB(){
    static int y = 0;
    x++;
    y++;
    printf("B: x=%d, y =%d\n", x, y);
}

int main() {

    funcionA();
    funcionA();
    funcionB();
    funcionA();
    funcionB();

    return 0;
}