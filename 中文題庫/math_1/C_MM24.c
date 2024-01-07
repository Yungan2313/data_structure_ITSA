#include <stdio.h>

int main(){
    int t,m;
    double s;
    scanf("%d %d",&t,&m);
    if(t<=60){
        s = t*m;
    }
    else if(t>60 && t<=120){
        s = (t-60)*(m*1.33)+m*60;
    }
    else{
        s = (t-120)*(m*1.66)+m*1.33*60+m*60;
    }
    printf("%0.1lf\n",s);
}