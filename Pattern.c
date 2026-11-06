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
            if(i%2==0){
            printf("#");}
            else{
                printf("-");
            }
        }
        printf("\n");
      star+=2;
      space--;
    }
    star-=4;
    space=1;

    for(int i=n-2;i>=0;i--){

        for(int j=0;j<space;j++){
            printf(" ");
        }

        for(int j=0;j<star;j++){
            if(i%2==0){
                printf("#");
            }
            else{
                printf("-");
            }
        }

        printf("\n");
        star-=2;
        space++;
    }
}