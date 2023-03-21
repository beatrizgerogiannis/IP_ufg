#include <stdio.h>

int main(){

    int n ,num1, num2, i, c1, c2, d1, d2, u1, u2, x, y, nn1, nn2;
    scanf("%d", &n);

    for(i = 0; i <n; i++){
        scanf("%d %d", &num1, &num2);
        c1 = num1/100;
        x = num1%100;
        d1 = (x/10) * 10;
        u1 = (x%10) * 100;

        nn1 = c1 + d1 + u1;

        c2 = num2/100;
        y = num2%100;
        d2 = (y/10) * 10;
        u2 = (y%10) * 100;

        nn2 = c2 + d2 + u2;

        if(nn1 > nn2){
            printf("%d\n", nn1);
        }else{
            printf("%d\n", nn2);
        }
        
    } 

    return 0;
}