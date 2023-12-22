#include <stdio.h>
#include <math.h>

int main(){
    float n,speed,check;
    speed = 1 - 0.0254*30;
    scanf("%f",&n);
    printf("%0.0f\n",ceil(n/speed));
}