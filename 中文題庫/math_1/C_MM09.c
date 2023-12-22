#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a>31){
        printf("Value of more than 31\n");
    }
    else{
        
        printf("%lld\n",2<<(a-1));
    }
}