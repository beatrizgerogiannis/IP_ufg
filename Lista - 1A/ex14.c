#include <stdio.h>

int main(){

    int i;
    float a, b, c;

    scanf("%d", &i);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a > c){
        float x = c;
        c = a;
        a = x;
    }
    if(a > b){
        float x = b;
        b = a;
        a = x;
    }
    if(b > c){
        float x = c;
        c = b;
        b = x;
    }

    switch (i){
    case 1:
        printf("%.2f %.2f %.2f", a, b, c);
        break;
    
    case 2:
        printf("%.2f %.2f %.2f", c, b, a);
        break;

    case 3:
        printf("%.2f %.2f %.2f", b ,c, a);
        break;
    }

    return 0;
}