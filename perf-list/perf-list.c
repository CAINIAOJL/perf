#include <stdio.h>

void longa() {
    int i, j;
    for(i = 0; i < 1000000; i++);
    j = i;
}

void foo1() {
    for(int i = 0; i < 100; i++) {
        longa();
    }
}

void foo2() {
    for(int i = 0; i < 10000; i++) {
        longa();
    }
}

int main(int argc, char* argv[]) {
    foo1();
    foo2();
    return 0;
}