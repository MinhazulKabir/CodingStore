#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,d,sum;
    scanf("%d",&n);
    int i,j;
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        if(a%2==1)
        {
            for(j=0; j<b; j++)
            {
                sum+=a;
                a+=2;
            }
        }
        else
        {

            a=a+1;
            for(j=0; j<b; j++)
            {
                sum+=a;
                a+=2;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
