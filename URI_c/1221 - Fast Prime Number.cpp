#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,i,f,j;
    long long int n;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        f=1;
        scanf("%d",&a);
        for(j=2;j<=sqrt(a);j++)
        {
            if(a%j==0)
            {
                f=0;
            }
        }
        if(f==1)
        printf("Prime\n");
        else
            printf("Not Prime\n");

    }
    return 0;
}
