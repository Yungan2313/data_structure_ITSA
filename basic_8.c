#include <stdio.h>

int main(){
    int n,test = 2,check = 0;
    scanf("%d",&n);
    while(n!=test+1){
        if(n%test == 0){
            printf("NO\n");
            check = 1;
            break;
        }
        test++;
    }
    if(check==0){
        printf("YES\n");
    }
}