#include <stdio.h>
#include <math.h>

int main(){
    float c;
    scanf("%f",&c);
    printf("%0.1f\n",round(((c*9/5)+32)*10)/10);

}