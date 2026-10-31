#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch <='y'){
        printf("%c",ch+1);
    }
  else if(ch=='z'){
    printf("%c",ch-25);
  }
}