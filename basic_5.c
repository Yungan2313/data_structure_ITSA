#include <stdio.h>

int main(){
    int n,binary[8],record[8],minus = 0x100,temp = 1;
    scanf("%d",&n);
    for(int i=0;i<8;i++){
        record[i]=0;
    }
    for(int i = 7;i>=0;i--){
        binary[i] = temp;
        temp *= 2;
    }
    if(n>=0){
        for(int i = 0;i<8;i++){
            if(n>=binary[i]){
                n-=binary[i];
                record[i] = 1;
            }
        }
    }
    else{
        n += minus;
        for(int i = 0;i<8;i++){
            if(n>=binary[i]){
                n-=binary[i];
                record[i] = 1;
            }
        }
    }
    for(int i = 0;i<8;i++){
        printf("%d",record[i]);
    }
    printf("\n");
}