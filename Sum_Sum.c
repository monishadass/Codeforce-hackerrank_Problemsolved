#include<stdio.h>
#include<limits.h>
int main(){
    int N,V,i,pos_sum=0,neg_sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&V);
if(V>0){
    pos_sum=pos_sum+V;
}
else{
    neg_sum=neg_sum+V*-1;
}
    }
    printf("%d %d",pos_sum,neg_sum*-1);
}