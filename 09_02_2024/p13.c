#include<string.h>
#include<stdio.h>
int main()
{
    char c[40];
    int i=0,s=0;
    printf("Enter a string: ");
    fgets(c,40,stdin);
    while(c[i]!='\0')
    {
        i++;
        if(c[i]==' ')
        s++;
    }
    printf("Number of words = %d",s+1);
    return 0;
}
