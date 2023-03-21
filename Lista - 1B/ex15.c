#include <stdio.h>

int main(){

    int n, A, B , SdA, SdB, k, cna=0;
    scanf("%d", &n);

    A = 1;
    while(1){
        SdA = 0;
        for(k=1; k <= A/2; k++){
            if(A%k == 0) SdA+=k;
        }
        if(SdA > A){
            SdB = 0;
            for(k=1; k <=SdA/2; k++){
                if(SdA%k == 0) SdB += k;
            }
            if(SdB == A){
                cna++;
                printf("(%d,%d)\n", A, SdA);
                if(cna == n) break;
            }
        }
        A++;
    }

    return 0;
}