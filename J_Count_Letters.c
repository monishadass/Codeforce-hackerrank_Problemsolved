
#include<stdio.h>
#include<string.h>

int main(){
    char s[10000001];
    scanf("%s",s);

    int fre[26]={0};

    for(int i=0;s[i]!='\0';i++){
        int index=s[i]-'a';
        fre[index]++;
    }

    for(int i=0;i<26;i++){
        if(fre[i]>0){
            printf("%c : %d\n",'a'+i,fre[i]);
        }
    }

    return 0;
}