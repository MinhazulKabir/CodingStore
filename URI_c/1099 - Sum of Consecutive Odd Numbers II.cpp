#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,a,b,i,j,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        if(a>b)
        {

            for(j=b+1; j<a; j++)
            {
                if(j%2!=0)
                sum+=j;
            }

        }
        else
        {

            for(j=a+1; j<b; j++)
            {
                if(j%2!=0)
                sum+=j;
            }

        }
        printf("%d\n",sum);
    }

    return 0;
}
