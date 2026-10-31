#include <stdio.h>

#include<limits.h>

int main() {
    int N;
    scanf("%d",&N);
    int a[N];
    int i;
    for( i=0;i<N;i++){

        scanf("%d",&a[i]);

    }
    for(i=N-1;i>=0;i--){
        if(i%2!=0){
            printf("%d ",a[i]); 
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
