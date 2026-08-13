#include<stdio.h>
#include<string.h>
 
int main()
{
    char s[1000];
    int count=0, temp;
    gets(s);
 
    for(int i=0 ; i<strlen(s) ; i++)
    {
        for(int j=i+1 ; j<strlen(s) ; j++)
        {
            if(s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(int i=0 ; i<strlen(s) ; i++)
    {
        if(s[i] != s[i+1])
        {
            if(s[i]>='a' && s[i]<='z')
                count++;
        }
    }
    if(count%2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
        printf("IGNORE HIM!");
}