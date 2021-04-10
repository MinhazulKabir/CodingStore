#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,i;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        for(i=b+1;i<a;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
    else
    {
        for(i=a+1;i<b;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
