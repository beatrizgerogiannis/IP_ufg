#include <stdio.h>

int main(){

    int X, i=0, j=0;
    scanf("%d", &X);

    double celsius[X], fahrenheit[X];

    while(i < X){
        scanf("%lf", &fahrenheit[i]);
        celsius[i] = (5*(fahrenheit[i]-32))/9;
        i++;
    }
    while(j<X){
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fahrenheit[j], celsius[j]);
        j++;
    }

    return 0;
}