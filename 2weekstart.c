#include<stdio.h>

int main() {
    int num = 0; // 변수인 num은 메모리 공간
    float fnum = 0;
    num = 100;
    num = -30;
    fnum = 120.625;

    printf("num is %d/n", num);
    printf("fnum is %3.3f/n", fnum);
    return 0;
}
