#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        printf("%d cm2\n",(a*b)/2);
    }
    return 0;
}
