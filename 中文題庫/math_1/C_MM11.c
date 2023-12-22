#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int charge[3] = {10,5,1};
    int sum[3] = {0,0,0};
    scanf("%d",&n);
    for(int i = 0;i<3;i++){
        if(n>=charge[i]){
            n-=charge[i];
            sum[i]++;
            i-=1;
        }
    }
    printf("NT10=%d\n",sum[0]);
    printf("NT5=%d\n",sum[1]);
    printf("NT1=%d\n",sum[2]);
}