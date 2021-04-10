#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,d,sum,i,j;
    while(scanf("%d",&n) && n!=0)
    {
        sum=0;
        if(n%2!=0)
        {
            n++;
            for(i=n;i<n+10;i+=2)
            {
                sum+=i;
            }
        }
        else
        {
            for(i=n;i<n+10;i+=2)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
