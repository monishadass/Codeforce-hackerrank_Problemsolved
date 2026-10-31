#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a= x%10;
    int b= x/10;
    if(a%b==0 || b%a==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
        
    }
}