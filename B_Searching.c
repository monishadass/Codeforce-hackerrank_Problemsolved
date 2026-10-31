#include<stdio.h>
int main(){
    int n,found;
    scanf("%d",&n);
    int arr[n];
    int i,x,j,a;
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
scanf("%d",&x);
for( j=0;j<n;j++){
        if(arr[j]==x){
         found=1;
         a=j;

            break;
        
        }
        else{
            found=0;
        }
        

    }
    if(found==1){
        printf("%d",a);
    }
    else{
        printf("-1");
    }
  

}