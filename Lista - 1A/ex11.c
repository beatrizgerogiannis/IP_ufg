#include <stdio.h>

int main(){

    float n1, n2, n3, n4, i=0;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    if(n1 > n3){
        i = n3;
        n3 = n1;
        n1 = i;
    }
    if(n1 > n2){
        i = n2;
        n2 = n1;
        n1 = i;
    }
    if(n2 > n3){
        i = n3;
        n3 = n2;
        n2 = i;
    }
    if( n3 > n4){
        i = n4;
        n4 = n3;
        n3 = i;
    }

    printf("%.2f, %.2f, %.2f, %.2f\n", n1, n2, n3, n4);

    return 0;
}