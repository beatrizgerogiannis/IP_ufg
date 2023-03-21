#include <stdio.h>

double string2double(const char * str);

int main(){

    char * str[129];

    while(scanf("%s", str) != EOF){
        string2double(str);
    }


    return 0;
}

double string2double(const char * str){
    double n;
    sscanf(str, "%lf", &n);
    printf("%.3lf %.3lf\n", n, n+n);
}