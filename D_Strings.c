#include<stdio.h>
#include<string.h>

int main(){
    char s[20];
    char b[20];
    scanf("%s %s",s,b);
    int len_s=strlen(s);
    int len_b=strlen(b);
    printf("%d %d\n",len_s,len_b);
    printf("%s%s\n",s,b);
    int temp=s[0];
    s[0]=b[0];
    b[0]=temp;
    printf("%s %s",s,b);
}