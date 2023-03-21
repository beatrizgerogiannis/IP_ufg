#include <stdio.h>

int fibonacci(int t1, int t2, int n){
    int i, num;
    for(i=0; i<n; i++){
        if(i == n-2){
            break;
        }
        num = t1 + t2;
        t1 = t2;
        t2 = num;
    }
    return num;
}


int main(){

    int t1, t2, n, num;
    scanf("%d %d %d", &t1, &t2, &n);

    num = fibonacci(t1,t2,n);
    printf("%d", num);

    return 0;
}