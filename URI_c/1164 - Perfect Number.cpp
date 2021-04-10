#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,j,sum;
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        sum=0;
        scanf("%d",&a);
        for(i=1; i<=a/2; i++)
        {
            if(a%i==0)
            {
                sum+=i;
            }
        }
        if(a==sum)
            printf("%d eh perfeito\n",a);
        else
            printf("%d nao eh perfeito\n",a);
    }
    return 0;
}