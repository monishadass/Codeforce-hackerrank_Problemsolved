#include <stdio.h>

#include<limits.h>

int main() {
    int N;
    scanf("%d",&N);
    if(N>0){
 for(int i=1;i<=N;i++){
        printf("%d ",i);
    }
    }
    else if(N<=0){
         for(int i=N;i<=0;++i){
        printf("%d ",i);
    }
    }
   

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
