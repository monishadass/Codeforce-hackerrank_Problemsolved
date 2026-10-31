#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    int low=INT_MAX;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        
    }
    int position;
    for(int i=1;i<=n;i++){
        if(arr[i]<low){
            low=arr[i];
            position=i;
        }
    }
    printf("%d %d",low,position);

}