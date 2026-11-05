#include<stdio.h>
char small_to_capital(char c){
    int a;
    if(c>='a'&& c<='z'){
        a=c-32;

    }
     if(c>='A'&& c<='Z'){
        a=c+32;

    }
    return a ;
}
int main(){
    char c;
    scanf("%c",&c);
    char ans=small_to_capital(c);
    printf("%c",ans);
}