#include<stdio.h>
int main(){
    int n,i,v,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
scanf("%d",&a[i]);

    }
    scanf("%d %d",&x ,&v);
    for(i=n-1;i>=0;i--){
if(x==i){
    a[i]=v;
}
printf("%d ",a[i]);
    }

}