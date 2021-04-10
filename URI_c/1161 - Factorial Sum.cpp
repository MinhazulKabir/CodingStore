#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long sum1,sum2;
    int i,j,n,m;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        sum1=1;
        sum2=1;
        for(i=n; i>=1; i--)
            sum1*=i;
        for(j=m; j>=1; j--)
            sum2*=j;
        printf("%llu\n",sum1+sum2);
    }
    return 0;
}
