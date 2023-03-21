#include <stdio.h>

int main(){

    float m[2][2];
    int i, j;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%f", &m[i][j]);
        }
    }

    float det;
    det = (m[0][0] * m[1][1]) - (m[1][0] * m[0][1]);

    printf("%.2f", det);

    return 0;
}