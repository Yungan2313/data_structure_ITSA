#include <stdio.h>

int main(){
    int count = 0,front,back,check = 0;
    char c,b[1000];
    while(1){
        c = getchar();
        if(c <= '0' || c>= '9'){
            break;
        }
        b[count] = c;
        count++;
    }
    if(count%2 == 0){
        back = count/2;
        front = count/2 +1;
        while(back >= 1){
            if(b[front-1] != b[back-1]){
                printf("NO\n");
                check = 1;
                break;
            }
            back--;
            front++;
        }

    }
    else{
        back = (count-1)/2;
        front = (count+1)/2+1;
        while(back >= 1){
            if(b[front-1] != b[back-1]){
                printf("NO\n");
                check = 1;
                break;
            }
            back--;
            front++;
        }
    }
    if(check==0){
        printf("YES\n");
    }
}