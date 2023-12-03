#include <stdio.h>

int main(){
    int fhr,fmin,shr,smin,total,temp,sum = 0;
    scanf("%d %d",&fhr,&fmin);
    scanf("%d %d",&shr,&smin);
    total = (shr*60+smin)-(fhr*60+fmin);
    if(total>240){
        temp = total - 240;
        total = 240;
        temp /= 30;
        temp *= 60;
        sum += temp;
    }
    if(total>120 && total<=240){
        temp = total - 120;
        total = 120;
        temp /= 30;
        temp *= 40;
        sum += temp;
    }
    if(total<=120){
        total /= 30;
        total *= 30;
        sum += total;
        printf("%d\n",sum);
    }

}