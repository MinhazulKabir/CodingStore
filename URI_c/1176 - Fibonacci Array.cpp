#include<bits/stdc++.h>
using namespace std;
long long dp[100];
long long f(int n)
{
    int a=0,b=1,c,i;
    dp[0]=0;
    dp[1]=1;
    for(i=2;i<=n;i++)
    {
        dp[i]=dp[i-2]+dp[i-1];
    }
    return dp[n];
}
int main()
{
    int n,a[60],i,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        memset(dp,0,sizeof(0));
        printf("Fib(%d) = %lld\n",b,f(b));

    }


    return 0;
}
