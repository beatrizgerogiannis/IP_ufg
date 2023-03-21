#include <stdio.h>
#include <math.h>

int next_power(int n, int p){
    int i=1, num, max, i2;
    
    if(n == 0){
        printf("%d -> 0^%d = 0", n, p);
    }
    else if(p == 0){
        printf("%d -> 0^%d = 1", n, p);
    }else{
        do{
            num = pow(i,p);
            if(num <= n){
                max = num;
                i2 = i;
            }
            i++;
        }
        while(num <= n); 
            printf("%d -> %d^%d = %d", n, i2 ,p, max);
    }
}

int main(){

    int n, p, num;
    scanf("%d %d", &n, &p);

    next_power(n, p); 

    return 0;
}