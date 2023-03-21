#include <stdio.h>
#include <string.h>

void limpa_buffer();

void cript1(char str[]);
void cript2(char str[]);
void cript3(char str[]);

int main(){

    char str[10000+1];
    int n, i, j, k;

    scanf("%d", &n);
    limpa_buffer();

    while(n--){
        scanf("%[^\n]s", str);
        limpa_buffer();
        cript1(str);
        cript2(str);
        cript3(str);
        printf("%s\n", str);

    }

    return 0;
}

void limpa_buffer(){
        scanf("%*[^\n]");
        scanf("%*c");
    }

void cript1(char str[]){
    int i;  

    for(i = 0; i < strlen(str); i++){
        if(str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122){
            str[i] += 3;
        }
    }
}

void cript2(char str[]){
    int i, aux, fim;
    fim = strlen(str) - 1;
    for(i = 0; i < strlen(str)/2; i++){
        aux = str[i];
        str[i] = str[fim];
        str[fim] = aux;
        fim--;
    }
}

void cript3(char str[]){
    int i;
        
    for(i=strlen(str)/2; i<strlen(str); i++){
        str[i] -= 1;
    }
}