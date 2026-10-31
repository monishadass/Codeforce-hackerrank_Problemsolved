#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
    char s[51],t[51];

    scanf("%s %s",s,t);

    int len1=strlen(s);
    int len2=strlen(t);
    int max;
    if(len1>len2){
        max=len1;
    }
    else{
        max=len2;
    }
for(int i=0;i<max;i++){
        if(i<len1){
            printf("%c",s[i]);
        }

        if(i<len2){
            printf("%c",t[i]);
        }
    }

    printf("\n");
}

}