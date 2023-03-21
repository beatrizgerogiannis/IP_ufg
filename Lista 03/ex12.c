#include <stdio.h>
#include <string.h>

void limpa_buffer(){
    scanf("%*[^\n]");
    scanf("%*c");
}

void funcao(int n, char *str[]){
    int i;
    if(strlen(*str) > n){
        for(i = 0; i < strlen(*str); i++){
            *str[i] = '\0';
        }
    }
}

int main(){

    int n, t;
    char str[500];
    scanf("%d", &n);
    while(n--){
        scanf("%d", &t);
        scanf("%[^\n]s", str);
        limpa_buffer();
        funcao(n, str);
        printf("%s", str);
    }
    return 0;
}