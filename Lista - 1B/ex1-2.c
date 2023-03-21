#include <stdio.h>

int main(){

    int n, i;
    scanf("%d", &n);

    float x, c;

    for( i = 0; i < n; i++){
        scanf("%f", &x);

        c = (5*(x-32))/9;

        printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", x, c);
    }

    return 0;
}