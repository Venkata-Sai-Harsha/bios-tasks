#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int count=0,num,n=0,extra=0,sum=0;
    float avg;
    scanf("%d",&num);
    
    int a[1000];
    do{
        scanf("%d",&a[count++]);
    }
    
    while(getchar()!='\n' && count<num);
    
    for(int i=0;i<count;i++){
        sum=sum+a[i];
    }
    avg=sum/(float)num;
    while(avg<9.5){
        sum=sum+10;
        num++;
        avg=sum/(float)num;
        extra++;
    }
    printf("%d",extra);
    return 0;
}
