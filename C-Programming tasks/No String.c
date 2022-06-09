#include <stdio.h>
#include <string.h>

int main(){
    int i, count1 = 0, count2 = 0;
    char string1[1000], string2[1000];
    fgets(string1, 1000, stdin);
    
    fgets(string2, 1000, stdin);
    
    for(i = 0; string1[i] != '\0'; i ++)
        count1 ++;
    for(i = 0; string2[i] != '\0'; i ++)
        count2 ++;
    if(count1 > count2)
        printf("First");
    else if(count2 > count1)
        printf("Second");
    else
        printf("Equal");
    return 0;
}
