#include <stdio.h>
#include <math.h>

int main(){
    float x,y,length;
    scanf("%f %f",&x,&y);
    length = sqrt(x*x+y*y);
    if(length<100){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
}