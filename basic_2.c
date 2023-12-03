#include <stdio.h>

int main(){
    int miles;
    double kilometers;
    scanf("%d",&miles);
    kilometers = miles*1.6;
    printf("%.1lf\n",kilometers);
}