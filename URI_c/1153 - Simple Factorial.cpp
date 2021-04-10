#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    printf("%d\n",f);
    return 0;
}
