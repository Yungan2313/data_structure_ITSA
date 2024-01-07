#include <stdio.h>

int main(){
    float m,sum;
    scanf("%f",&m);
    if(m<=800){
        sum = m*0.9;
    }
    else if(m>800 && m<1500){
        sum = m*0.9*0.9;
    }
    else{
        sum = m*0.9*0.79;
    }
    printf("%0.1f\n",sum);
}