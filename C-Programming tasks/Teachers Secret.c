 #include<stdio.h>
 #include<string.h>

 int main(){
     int n;
     char *check;
     int marks=0;
     scanf("%d",&n);
     char s[n][10];
     for(int i=0;i<n;i++)
        scanf("%s",s[i]);

     int m[n];
     for(int i=0;i<n;i++)
        scanf("%d ",&m[i]);

     char ans[100];
     fgets(ans, sizeof(ans), stdin);

     for(int i=0;i<n;i++)
     {check = strstr(ans,s[i]);
        if(check!=NULL)
          marks=marks+m[i];

      }
       printf("%d",marks);
       return 0;

 }
