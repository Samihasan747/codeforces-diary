#include<stdio.h>
 
int main()
{
    int arr[5][5];
    int m,n;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
 
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                if(i<2)
                {
                    m=2-i;
                }
                else
                {
                    m=i-2;
                }
                if(j<2)
                {
                    n=2-j;
                }
                else
                {
                    n=j-2;
                }
 
            }
 
        }
    }
 
    printf("%d",m+n);
}