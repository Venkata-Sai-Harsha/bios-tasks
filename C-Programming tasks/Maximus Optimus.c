#include<stdio.h>

 int main() {
     int a[3],n,p=0;
     for(int i=0;i<3;i++)
     scanf("%d",&a[i]);

     scanf("%d",&n);

     for(int j=0;j<n;j++){
         int max = 0;
         for(int i=1;i<3;i++){
              if(a[max]<a[i])
              max = i;
         }
         p=p+a[max];
         a[max]--;
     }
     printf("%d",p);
     return 0;

 }
