#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=1,c=0,i,n;
    scanf("%d",&n);
    //printf("%d %d ",a,b);
    for(i=0; i<n; i++)
    {
        if(i<=1)
        {
            c=i;
        }
        else
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",c);
        if(i<n-1)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
