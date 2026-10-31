#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int found=0;
 for(int i=0,j=n-1;i<j;i++,j--){
   
if(a[i]!=a[j]){
     printf("NO");
    found=1;
     break;
}
    
 }
 if(found==0){
    printf("YES");
}

}
    
    

    

