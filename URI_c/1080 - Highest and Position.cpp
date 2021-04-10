#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,p=0,high,low;
    low=-1;
    for(i=1; i<=100; i++)
    {
        scanf("%d",&a);
        if(a>low)
        {
            high=a;
            p=i;
            low=a;
        }
    }
    printf("%d\n%d\n",high,p);
    return 0;
}