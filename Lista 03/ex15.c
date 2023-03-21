#include <stdio.h>

int main(){

    int at, an;
    scanf("%d %d", &at, &an);

    int i ,v[1000], cont=0;
    for(i=0;i<at;i++){
        scanf("%d", &v[i]);
        if(v[i] <= 0){
            cont++;
        }
    }

    int j;
    if(cont >= an){
        printf("NAO\n");
        for(j=at-1;j>=0;j--){
            if(v[j] <= 0){
                printf("%d\n", j+1);
            }
        }
    }else{
        printf("SIM");
    }

    return 0;
}