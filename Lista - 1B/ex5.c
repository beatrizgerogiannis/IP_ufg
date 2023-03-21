#include <stdio.h>

int main(){

    int i = 1;
    double num, fatorial;

    scanf("%lf", &num);
    fatorial=num;

    if(num == 0){
        printf("0! = 1\n");
    }else if(num > 0){
        for(i; i<num; i++){
            fatorial *= i;
        }
        printf("%.0lf! = %.0lf\n", num, fatorial);
    }

    return 0;
}