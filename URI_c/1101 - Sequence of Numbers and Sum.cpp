#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,sum;
    while(scanf("%d%d",&a,&b) && a>0 &&b>0)
    {
        sum=0;
        if(a>b)
        {
            for(i=b; i<=a; i++)
            {
                printf("%d ",i);
                sum+=i;
            }
            printf("Sum=%d\n",sum);
        }
        else
        {
            for(i=a; i<=b; i++)
            {
                printf("%d ",i);
                sum+=i;
            }
            printf("Sum=%d\n",sum);
        }
    }

    return 0;
}
