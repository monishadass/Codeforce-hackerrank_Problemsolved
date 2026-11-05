#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int star=1;
    int space=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<space;j++){
printf(" ");
        }
        for(int j=0;j<star;j++){
            printf("*");
        }
        printf("\n");
      star+=2;
      space--;
    }
    for(int i=0;i<n;i++){
        for(int j=space+1;j>0;j--){
printf(" ");
        }
        for(int j=star-2;j>=1;j--){
            printf("*");
        }
        printf("\n");
      star-=2;
      space++;
    }
}