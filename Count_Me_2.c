#include<stdio.h>
#include<string.h>
int main(){
    char a[100005];
    scanf("%s",a);
    int count=0;
    
    int len=strlen(a);
    for(int i=0;i<len;i++){
        if(a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o'|| a[i]=='u'){
        int count1=0;count1++;
        }
        else{
count++;
        }
    }
printf("%d",count);
}