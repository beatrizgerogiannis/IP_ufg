#include <stdio.h> 

int main(){

    int n, b, i;
    scanf("%d", &n);

    if(0 <= n && n <= 255){
        for(i = 0; i <= 8; i++){
            b = n % 2;
            printf("%d", b);
            n = n / 2;
        }
    }

    return 0;
}