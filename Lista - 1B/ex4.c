#include <stdio.h>

int main(){

    int n;
    double num, i=1;
    scanf("%d", &n);

    if(n > 0){
        for(i; i<= n; i++){
            num = num + 1/i;
        }
        printf("%.6lf\n", num);
    }else{
        printf("Numero invalido!\n");
    }

    return 0;
}