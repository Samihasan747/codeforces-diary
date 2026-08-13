#include<stdio.h>
#include<string.h>
 
int main()
{
    int a,b;
    char s[100];
    scanf("%d",&b);
 
    for(int i=0;i<=b;i++)
    {
        gets(s);
        a=strlen(s);
 
        if(a>10)
        {
            printf("%c%d%c
",s[0],a-2,s[a-1]);
        }
        else
            printf("%s
",s);
    }
}