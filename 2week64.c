#include <stdio.h>

int main(void)
{
    int array[2][3][4] = {0,}; //모든 칸을 0으로 초기화 -> 미리 청소
    // 2 * 3 * 4 = 24개

    for(int i = 0; i<2; i++){ // i = 면
        for(int j=0; j<3; j++){ // j = 행
            for(int k=0; k<4; k++){ // k = 열
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    return 0;
}