#include<stdio.h>

int main(){

    int n1, n2, n3;
    char a, b, c;
    scanf("%d %d %d\n", &n1, &n2 , &n3);
    scanf("%c%c%c", &a, &b, &c);

    if(n1 > n3){
        int i = n3;
        n3 = n1;
        n1 = i;
    }
    if(n1 > n2){
        int i = n2;
        n2 = n1;
        n1 = i;
    }
    if(n2 > n3){
        int i = n3;
        n3 = n2;
        n2 = i;
    }

    if(a == 'A' && b == 'B' && c == 'C'){
        printf("%d %d %d\n",n1, n2, n3);
    }
     if(a == 'A' && b == 'C' && c == 'B'){
        printf("%d %d %d\n",n1, n3, n2);
    }
     if(a == 'B' && b == 'A' && c == 'C'){
        printf("%d %d %d\n",n2, n1, n3);
    }
     if(a == 'B' && b == 'C' && c == 'A'){
        printf("%d %d %d\n",n2, n3, n1);
    }
     if(a == 'C' && b == 'A' && c == 'B'){
        printf("%d %d %d\n",n3, n1, n2);
    }
     if(a == 'C' && b == 'B' && c == 'A'){
        printf("%d %d %d\n",n3, n2, n1);
    }

    printf("%c %c %c", a, b, c);

    return 0;
}