#include <stdio.h>

int main(){
    int a1,a2,a3;
    int coin;
    int charge[3];
    for(int i=0;i<3;i++){
        charge[i] = 0;
    }
    scanf("%d,%d,%d,%d",&coin,&a1,&a2,&a3);
    if(coin<a1*15+a2*20+a3*30){
        printf("0\n");
    }
    else{
        coin-=a1*15+a2*20+a3*30;
        while(coin != 0){
            if(coin>=50){
                coin-=50;
                charge[2]++;
                continue;
            }
            else if(coin >= 5){
                coin-=5;
                charge[1]++;
                continue;
            }
            else{
                coin-=1;
                charge[0]++;
                continue;
            }
        }
        printf("%d,%d,%d\n",charge[0],charge[1],charge[2]);
    }
}