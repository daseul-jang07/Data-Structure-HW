#include <stdio.h>

int main(void)
{
    int num = 10; //num은 일반 변수
    int* pnum = &num;

    printf("%d, %d \n", num, *pnum);

    return 0;
}