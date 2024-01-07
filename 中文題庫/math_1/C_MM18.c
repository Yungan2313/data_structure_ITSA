#include <stdio.h>
int main(){
    int n,binary[7],temp = 1;
    scanf("%d",&n);
    for(int i=6;i>=0;i--){
        binary[i] = temp;
        temp<<=1;
    }
    if(n<0){
        printf("1");
        n = 128+n;
        for(int i=0;i<7;i++){
            if(n>=binary[i]){
                n -= binary[i];
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");

    }
    else{
        printf("0");
        for(int i=0;i<7;i++){
            if(n>=binary[i]){
                n -= binary[i];
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}