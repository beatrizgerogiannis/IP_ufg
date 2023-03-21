#include <stdio.h>

int main(){

    int num, num2;
    scanf("%d", &num);
    int i=1;

    while(i <= num){
        if(i % 2 == 0){
            num2 = i*i;
            printf("%d^2 = %d\n", i, num2);
        }
        i++;
    }

    return 0;
}