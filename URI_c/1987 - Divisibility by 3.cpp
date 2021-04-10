#include<bits/stdc++.h>
using namespace std;
int main()
{
    //short n;
    int a,n,sum,x,i;
    while(scanf("%d%d",&a,&n)!=EOF)
    {
        sum=0;
        for(i=1;i<=a;i++)
        {
            x=n%10;
            sum+=x;
            n/=10;
        }
        if(sum%3==0)
            printf("%d sim\n",sum);
        else
            printf("%d nao\n",sum);
    }
    return 0;
}
