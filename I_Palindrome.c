#include<stdio.h>
int main(){
    char s[1005];
    scanf("%s",s);
    int n=strlen(s);
    int i,j;
    int flag=1;
    for(i=0,j=n-1;i<j;i++,j--){
if(s[i]!=s[j]){
    printf("NO");
flag=0;
break;
}
    }
    if(flag==1){
        printf("YES");
    }
}