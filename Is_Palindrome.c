#include<stdio.h>
#include<string.h>
int is_palindrome(char s[]){
    int len=strlen(s);
    int flag=0;
    for(int i=0;i<len;i++){
        for(int j=len-1-i;j>i;j--){
            if(s[i]!=s[j]){
                flag=1;
                break;
            }
           break;
           
        }
        if(flag==1)
        break;
    }
    if(flag==1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){

    char s[1005];
    scanf("%s",s);
   int palin= is_palindrome(s);
   if(palin==1){
    printf("Palindrome");
   }
   else{
    printf("Not Palindrome");
   }
}