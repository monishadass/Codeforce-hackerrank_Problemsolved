#include<stdio.h>

int main(){
    int a,b,c;
    char s,eq;
    scanf("%d %c %d %c %d",&a,&s,&b,&eq,&c);
   
if(s=='+'){
    int sum=a+b;
    if(sum==c){
        printf("Yes");
    }
    else{
      
        printf("%d",sum);
    }
}
else if(s=='*'){
    int multi=a*b;
    if(multi==c){
        printf("Yes");
    }
    else{
       
        printf("%d",multi);
    }
}
  else if(s=='-'){
      int sub=a-b;
    if(sub==c){
        printf("Yes");
    }
    else{
     
        printf("%d",sub);
    }
}
  

}