#include<stdio.h>
#include<limits.h>

int main(){
    int n,x,even,odd;
    even=0;odd=0;int pos=0;
    int neg=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x%2==0){
            even++;
        }
        else{
            odd++;
        }
        if(x<0){
            neg++;

        }
        else if(x>0){
            pos++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
}