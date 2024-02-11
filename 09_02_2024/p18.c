#include<stdio.h>
#include<string.h>
int main()
{
    char c[100],s[20],copy[20];
    int i=0,l=0;
    printf("Enter a string: ");
    fgets(c,100,stdin);
    printf("All the pallindrome words are:-\n");
    while(c[i]!='\0'&&c[i]!='\n')
    {
        int f=0;
        l=0;
        while(c[i]!=' '&&c[i]!='\n')
        {
            copy[l]=s[l]=c[i];
            i++;
            l++;
        }
        for(int j=0;j<l/2;j++)
        {
            char temp = copy[j];
            copy[j]=copy[l-j-1];
            copy[l-j-1]=temp;
        }
        for(int j=0;j<l;j++)
        {
            if(copy[j]!=s[j])
            f++;
        }
        if(f==0)
        {
            s[l]='\0';
            puts(s);
        }
        if (c[i]==' '||c[i]=='\n')
        {
            i++;
        }
    }
}
