#include <stdio.h>
#include <string.h>

void sentencaDancante(char p[]); 

int main(){

    char p[51];
    scanf("%[^EOF]", p); 
    sentencaDancante(p);
    printf("%s", p);

    return 0;
}

void sentencaDancante(char p[]){
    int i;
    for(i = 2; i<strlen(p); i+=2){
        if(p[i] >= 97 && p[i] <= 122){
            p[i] -= 32;
        }

    }
}