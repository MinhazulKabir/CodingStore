#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=1,j=2,k=3,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d %d %d PUM\n",a,j,k);
        a+=4;
        j+=4;
        k+=4;
    }
    return 0;
}
