#include<stdio.h>
int main(){
    int t;
    int take_days;
    int remaining_days;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
take_days=(m1*d)/(m1+m2);
remaining_days=d-take_days;
printf("%d\n",remaining_days);

    }
    
}