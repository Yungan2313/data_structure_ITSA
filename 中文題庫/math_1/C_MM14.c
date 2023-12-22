#include <stdio.h>

int main(){
    int second;
    scanf("%d",&second);
    printf("%d days\n",second/86400);
    second %= 86400;
    printf("%d hours\n",second/3600);
    second %= 3600;
    printf("%d minutes\n",second/60);
    second %= 60;
    printf("%d seconds\n",second);
}