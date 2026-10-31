#include<stdio.h>
#include<string.h>
int main(){
    char s[10005];
   
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
     scanf("%s",s);
     int len=strlen(s);
     int cntsmall=0;
   int cntdigit=0;
    int cntcapital=0;
    int cnts=0;
     for(int j=0;j<len;j++){
        if(s[j]>='a' && s[j]<='z'){
            cntsmall++ ; 
        }
        else if(s[j]>='A' && s[j]<='Z'){
            cntcapital++;
        }
     else if (s[j]>= 1 && s[j]>= 9){
        cntdigit++;
     }
   
     

     }
     printf("%d %d %d\n",cntcapital,cntsmall,cntdigit);
     
    
    }
}